
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100010ca0(long param_1)

{
  int iVar1;
  MotionNodeRotateCompose MVar2;
  Hash40 HVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  undefined8 local_30;
  ulong uStack40;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_30,_FIGHTER_ROBOT_STATUS_FINAL_WORK_FLOAT_MAINLASER_ANGLE_OFFSET);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_30);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack64,fVar4);
  lib::L2CValue::~L2CValue((L2CValue *)&local_30);
  lib::L2CValue::L2CValue(aLStack80,0x57ac2c32e);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,_MOTION_NODE_ROTATE_COMPOSE_BEFORE);
  HVar3 = lib::L2CValue::as_hash(aLStack80);
  uVar5 = lib::L2CValue::as_number(aLStack96);
  uVar6 = lib::L2CValue::as_number(aLStack64);
  uVar7 = lib::L2CValue::as_number(aLStack112);
  local_30 = CONCAT44(uVar6,uVar5);
  uStack40 = (ulong)uVar7;
  MVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar3,(Vector3f *)&local_30,MVar2,0);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

