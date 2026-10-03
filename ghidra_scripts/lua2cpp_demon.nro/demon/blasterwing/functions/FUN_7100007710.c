
void FUN_7100007710(long param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5)

{
  MotionNodeRotateCompose MVar1;
  ulong uVar2;
  ulong uVar3;
  Hash40 HVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1172a49252);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar3 = lib::L2CValue::as_integer(param_3);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar5);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1172a49252);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar3 = lib::L2CValue::as_integer(param_4);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack112,fVar5);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::operator*(aLStack96,param_5);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  uVar2 = lib::L2CValue::operator<((L2CValue *)&local_50,aLStack112);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((uVar2 & 1) == 0) {
    uVar2 = lib::L2CValue::operator<(aLStack128,aLStack112);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::operator=(aLStack128,aLStack112);
    }
  }
  else {
    uVar2 = lib::L2CValue::operator<(aLStack112,aLStack128);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::operator=(aLStack128,aLStack112);
    }
  }
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,MOTION_NODE_ROTATE_COMPOSE_AFTER);
  HVar4 = lib::L2CValue::as_hash(param_2);
  uVar6 = lib::L2CValue::as_number(aLStack128);
  uVar7 = lib::L2CValue::as_number(aLStack144);
  uVar8 = lib::L2CValue::as_number(aLStack160);
  local_50 = CONCAT44(uVar7,uVar6);
  uStack72 = (ulong)uVar8;
  MVar1 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar4,(Vector3f *)&local_50,MVar1,0);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

