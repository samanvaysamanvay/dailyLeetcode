/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
  public:
	bool check(ListNode *head, TreeNode *root) {
		if (head == nullptr) {
			return true;
		}
		if (root == nullptr) {
			return false;
		}
		if (head->val != root->val) {
			return false;
		}

		bool left = check(head->next, root->left);
		bool right = check(head->next, root->right);
		return max(left, right);
	}

	bool isSubPath(ListNode *head, TreeNode *root) {
		if (root == nullptr) {
			return false;
		}

		bool curr = check(head, root);
		bool left = isSubPath(head, root->left);
		bool right = isSubPath(head, root->right);

		return max({curr, left, right});
	}
};