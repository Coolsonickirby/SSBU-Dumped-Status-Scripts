
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100028320(long param_1,L2CValue *param_2,L2CValue *param_3)

{
  ulong uVar1;
  L2CValue *this;
  float fVar2;
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
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar1 = lib::L2CValue::operator==(param_2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar1 & 1) == 0) {
    fVar2 = (float)app::lua_bind::MotionModule__frame_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack80,fVar2);
    uVar1 = lib::L2CValue::operator==(aLStack80,param_3);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar1 & 1) == 0) {
      return;
    }
    lib::L2CValue::L2CValue(aLStack192,0x57bdfbd15);
    lib::L2CValue::L2CValue
              (aLStack208,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLOAT_CATCH_MAP_COLL_OFFSET_X_L);
    lib::L2CValue::L2CValue(aLStack224,param_2);
    FUN_7100028610(param_1,aLStack192,aLStack208,aLStack224);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack240,0x5af9e82ca);
    lib::L2CValue::L2CValue
              (aLStack256,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLOAT_CATCH_MAP_COLL_OFFSET_X_R);
    lib::L2CValue::L2CValue(aLStack272,param_2);
    FUN_7100028610(param_1,aLStack240,aLStack256,aLStack272);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    this = aLStack240;
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0x57bdfbd15);
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLOAT_CATCH_MAP_COLL_OFFSET_X_L);
    lib::L2CValue::L2CValue(aLStack128,param_2);
    FUN_7100028610(param_1,aLStack96,aLStack112,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack144,0x5af9e82ca);
    lib::L2CValue::L2CValue
              (aLStack160,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLOAT_CATCH_MAP_COLL_OFFSET_X_R);
    lib::L2CValue::L2CValue(aLStack176,param_2);
    FUN_7100028610(param_1,aLStack144,aLStack160,aLStack176);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    this = aLStack144;
  }
  lib::L2CValue::~L2CValue(this);
  return;
}

