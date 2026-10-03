
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001a530(long param_1,L2CValue *param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  Hash40 HVar5;
  L2CValue *pLVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar3 = lib::L2CValue::operator==(param_2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  pLVar4 = (L2CValue *)(param_1 + 200);
  if ((uVar3 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar3 = lib::L2CValue::operator==(pLVar6,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar3 = lib::L2CValue::operator==(pLVar6,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar3 & 1) != 0) goto LAB_710001a57c;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar3 = lib::L2CValue::operator==(pLVar6,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      return;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar3 = lib::L2CValue::operator==(pLVar6,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      return;
    }
  }
LAB_710001a57c:
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar3 = lib::L2CValue::operator==(pLVar4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    FUN_7100019130(param_1);
    lib::L2CValue::L2CValue(aLStack80,0x1337fadc39);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    fVar7 = (float)lib::L2CValue::as_number(aLStack96);
    fVar8 = (float)lib::L2CValue::as_number(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::MotionModule__change_motion_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,fVar7,fVar8,(bool)(bVar1 & 1),
               0.0,false,false);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    uVar2 = app::lua_bind::MotionModule__end_frame_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack80,uVar2);
    fVar7 = (float)lib::L2CValue::as_number(aLStack80);
    app::lua_bind::MotionModule__set_frame_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar7,true);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    fVar7 = (float)lib::L2CValue::as_number(aLStack80);
    app::lua_bind::MotionModule__set_rate_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar7);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x1707df7776);
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::MotionModule__add_motion_2nd_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,0.0,1.0,false,1.0);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    fVar7 = (float)lib::L2CValue::as_number(aLStack80);
    app::lua_bind::MotionModule__set_rate_2nd_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar7);
  }
  else {
    FUN_7100019070();
    lib::L2CValue::L2CValue(aLStack80,0xf3c6351ed);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    fVar7 = (float)lib::L2CValue::as_number(aLStack96);
    fVar8 = (float)lib::L2CValue::as_number(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::MotionModule__change_motion_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,fVar7,fVar8,(bool)(bVar1 & 1),
               0.0,false,false);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    uVar2 = app::lua_bind::MotionModule__end_frame_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack80,uVar2);
    fVar7 = (float)lib::L2CValue::as_number(aLStack80);
    app::lua_bind::MotionModule__set_frame_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar7,true);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    fVar7 = (float)lib::L2CValue::as_number(aLStack80);
    app::lua_bind::MotionModule__set_rate_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar7);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x13705539b0);
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::MotionModule__add_motion_2nd_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,0.0,1.0,false,1.0);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    fVar7 = (float)lib::L2CValue::as_number(aLStack80);
    app::lua_bind::MotionModule__set_rate_2nd_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar7);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

