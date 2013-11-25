=====================================
 |Percona Server| Feature Comparison
=====================================

|Percona Server| is an enhanced drop-in replacement for |MySQL|. With |Percona Server|,

  * Your queries will run faster and more consistently.

  * You will consolidate servers on powerful hardware.

  * You will delay sharding, or avoid it entirely.

  * You will save money on hosting fees and power.

  * You will spend less time tuning and administering.

  * You will achieve higher uptime.

  * You will troubleshoot without guesswork.

We provide these benefits by significantly enhancing |Percona Server| as compared to the standard |MySQL| database server:

+---------------------------------------+----------------------+--------------+
|Features                               |Percona Server 5.6.13 |MySQL 5.6.13  |
+=======================================+======================+==============+
|Open source                            | Yes                  | Yes          |      
+---------------------------------------+----------------------+--------------+
|ACID Compliance                        | Yes                  | Yes          |                     
+---------------------------------------+----------------------+--------------+
|Multi-Version Concurrency Control      | Yes                  | Yes          |                      
+---------------------------------------+----------------------+--------------+
|Row-Level Locking                      | Yes                  | Yes          |
+---------------------------------------+----------------------+--------------+
|Automatic Crash Recovery               | Yes                  | Yes          |
+---------------------------------------+----------------------+--------------+
|Table Partitioning                     | Yes                  | Yes          |
+---------------------------------------+----------------------+--------------+
|Views                                  | Yes                  | Yes          |
+---------------------------------------+----------------------+--------------+
|Subqueries                             | Yes                  | Yes          |
+---------------------------------------+----------------------+--------------+
|Triggers                               | Yes                  | Yes          |
+---------------------------------------+----------------------+--------------+
|Stored Procedures                      | Yes                  | Yes          |
+---------------------------------------+----------------------+--------------+
|Foreign Keys                           | Yes                  | Yes          |
+---------------------------------------+----------------------+--------------+
|GTID Replication                       | Yes                  | Yes          |
+---------------------------------------+----------------------+--------------+

+---------------------------------------+----------------------+--------------+
|Extra Features for Developers          |Percona Server 5.6.13 |MySQL 5.6.13  |
+=======================================+======================+==============+
|NoSQL Socket-Level Interface           | Yes                  | Yes          |
+---------------------------------------+----------------------+--------------+
|Extra Hash/Digest Functions            | Yes                  |              |
+---------------------------------------+----------------------+--------------+

+---------------------------------------+----------------------+--------------+
|Extra Diagnostic Features              |Percona Server 5.6.13 |MySQL 5.6.13  |
+=======================================+======================+==============+
|INFORMATION_SCHEMA Tables              | 70                   | 59           |
+---------------------------------------+----------------------+--------------+
|Global Performance and Status Counters | 398                  | 341          |
+---------------------------------------+----------------------+--------------+
|Per-Table Performance Counters         | Yes                  |              |
+---------------------------------------+----------------------+--------------+
|Per-Index Performance Counters         | Yes                  |              |
+---------------------------------------+----------------------+--------------+
|Per-User Performance Counters          | Yes                  |              |
+---------------------------------------+----------------------+--------------+
|Per-Client Performance Counters        | Yes                  |              |
+---------------------------------------+----------------------+--------------+
|Per-Thread Performance Counters        | Yes                  |              |
+---------------------------------------+----------------------+--------------+
|Global Query Response Time Statistics  | Yes                  |              |
+---------------------------------------+----------------------+--------------+
|InnoDB Data Dictionary as I_S Tables   | Yes                  |              |
+---------------------------------------+----------------------+--------------+
|Access to InnoDB Data Statistics       | Yes                  |              |
+---------------------------------------+----------------------+--------------+
|Enhanced SHOW ENGINE INNODB STATUS     | Yes                  |              |
+---------------------------------------+----------------------+--------------+
|Enhanced Mutex Diagnostics             | Yes                  |              |
+---------------------------------------+----------------------+--------------+
|Undo Segment Information               | Yes                  |              |
+---------------------------------------+----------------------+--------------+

+---------------------------------------+----------------------+--------------+
|Performance & Scalability Enhancements |Percona Server 5.6.13 |MySQL 5.6.13  |
+=======================================+======================+==============+
|Fine-Grained Mutex Locking             | Yes                  |              |
+---------------------------------------+----------------------+--------------+
|Lock-Free Algorithms                   | Yes                  |              |
+---------------------------------------+----------------------+--------------+
|Improved MEMORY Storage Engine         | Yes                  |              |
+---------------------------------------+----------------------+--------------+
|Partitioned Adaptive Hash Search       | Yes                  |              |
+---------------------------------------+----------------------+--------------+
|Support for FlashCache                 | Yes                  |              |
+---------------------------------------+----------------------+--------------+
|Read-Ahead Improvements                | Yes                  |              |
+---------------------------------------+----------------------+--------------+

+---------------------------------------+----------------------+--------------+
|Extra Features for DBA/Operations Staff|Percona Server 5.6.13 |MySQL 5.6.13  |
+=======================================+======================+==============+
|Configurable Page Sizes                | Yes                  | Yes          |
+---------------------------------------+----------------------+--------------+
|Configurable Insert Buffer Size        | Yes                  |              |
+---------------------------------------+----------------------+--------------+
|Error/Warning Logging Enhancements     | Yes                  |              |
+---------------------------------------+----------------------+--------------+
|Configurable Fast Index Creation       | Yes                  |              |
+---------------------------------------+----------------------+--------------+
|Support for Fake Changes               | Yes                  |              |
+---------------------------------------+----------------------+--------------+
|Changed Page Tracking                  | Yes                  |              |
+---------------------------------------+----------------------+--------------+
|PAM Authentication                     | Yes                  | Yes [#n-1]_  |
+---------------------------------------+----------------------+--------------+
|Threadpool                             | Yes                  | Yes [#n-1]_  |
+---------------------------------------+----------------------+--------------+
|Log Archiving                          | Yes                  |              |
+---------------------------------------+----------------------+--------------+


+---------------------------------------+----------------------+--------------+
|Running Database as a Service          |Percona Server 5.6.13 |MySQL 5.6.13  |
+=======================================+======================+==============+
|Special Utility User                   | Yes                  |              |
+---------------------------------------+----------------------+--------------+
|Expanded Program Option Modifiers      | Yes                  |              |
+---------------------------------------+----------------------+--------------+
|Extended ``secure-file-priv`` option   | Yes                  |              |
+---------------------------------------+----------------------+--------------+
|Enforcing the Specific Storage Engine  | Yes                  |              |
+---------------------------------------+----------------------+--------------+

.. [#n-1] Feature available in Enterprise version only