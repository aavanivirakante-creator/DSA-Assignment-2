# Final Conclusion

For a hospital where patients are continuously inserted and the highest-priority patient must be available immediately, a Max Heap / Priority Queue is the most suitable approach.

The highest severity score is maintained at the root, so the highest-priority patient can be accessed in O(1) time. New patients can be inserted in O(log n) time.

Heap Sort and Quick Sort are useful for sorting the complete set of patients, but they are not designed for continuously maintaining an immediately accessible priority queue.
