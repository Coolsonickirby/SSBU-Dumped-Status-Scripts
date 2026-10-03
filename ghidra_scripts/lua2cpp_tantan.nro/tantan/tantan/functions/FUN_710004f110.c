
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710004f110(long param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6)

{
  int iVar1;
  long lVar2;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_R);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_L);
  lib::L2CValue::L2CValue(aLStack128,param_2);
  lib::L2CValue::L2CValue(aLStack144,param_3);
  lib::L2CValue::L2CValue(aLStack160,param_4);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_R);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_L);
  iVar1 = lib::L2CValue::as_integer(aLStack208);
  lVar2 = app::lua_bind::WorkModule__get_int64_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack192,lVar2);
  lib::L2CValue::L2CValue(aLStack224,param_5);
  lib::L2CValue::L2CValue(aLStack240,param_6);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MAP_COLL_FRAME_R);
  lib::L2CValue::L2CValue(aLStack272,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLOAT_ATTACK_SHIFT_ANGLE_L);
  FUN_710004f610(param_1,aLStack96,aLStack112,aLStack128,aLStack144,aLStack160,aLStack176,aLStack192
                 ,aLStack224,aLStack240,aLStack256,aLStack272);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

