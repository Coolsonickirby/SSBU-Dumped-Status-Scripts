
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002a130(long param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4)

{
  byte bVar1;
  L2CValue *this;
  ulong uVar2;
  ulong uVar3;
  Hash40 HVar4;
  float fVar5;
  float fVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar2 = lib::L2CValue::operator==(this,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar3 = lib::L2CValue::operator==(param_2,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar2 & 1) == 0) {
    param_3 = param_4;
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::L2CValue(aLStack112,1.0);
      lib::L2CValue::L2CValue(aLStack128,false);
      HVar4 = lib::L2CValue::as_hash(param_4);
      fVar5 = (float)lib::L2CValue::as_number(aLStack96);
      fVar6 = (float)lib::L2CValue::as_number(aLStack112);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::MotionModule__change_motion_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar4,fVar5,fVar6,
                 (bool)(bVar1 & 1),0.0,false,false);
      goto LAB_710002a2f0;
    }
  }
  else if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar4 = lib::L2CValue::as_hash(param_3);
    fVar5 = (float)lib::L2CValue::as_number(aLStack96);
    fVar6 = (float)lib::L2CValue::as_number(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::MotionModule__change_motion_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar4,fVar5,fVar6,(bool)(bVar1 & 1),
               0.0,false,false);
LAB_710002a2f0:
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    return;
  }
  HVar4 = lib::L2CValue::as_hash(param_3);
  app::lua_bind::MotionModule__change_motion_inherit_frame_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar4,-1.0,1.0,0.0,false,false);
  return;
}

