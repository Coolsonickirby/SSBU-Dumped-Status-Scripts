
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002c750(long param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4)

{
  byte bVar1;
  Hash40 HVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  float fVar6;
  float fVar7;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  HVar2 = app::lua_bind::MotionModule__motion_kind_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack112,HVar2);
  fVar6 = (float)app::lua_bind::MotionModule__frame_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack128,fVar6);
  fVar6 = (float)app::lua_bind::MotionModule__rate_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack144,fVar6);
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar3 = lib::L2CValue::operator==(param_4,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar3 & 1) == 0) {
    pLVar4 = (L2CValue *)(param_1 + 200);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar3 = lib::L2CValue::operator==(pLVar5,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar3 & 1) != 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x17);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar3 = lib::L2CValue::operator==(pLVar5,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar3 & 1) == 0) {
        HVar2 = lib::L2CValue::as_hash(param_2);
        fVar6 = (float)lib::L2CValue::as_number(aLStack128);
        fVar7 = (float)lib::L2CValue::as_number(aLStack144);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar2,fVar6,fVar7,0.0,false,
                   false);
        goto LAB_710002cab4;
      }
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x16);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar3 = lib::L2CValue::operator==(pLVar5,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar3 & 1) != 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x17);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar3 = lib::L2CValue::operator==(pLVar4,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar3 & 1) == 0) {
        HVar2 = lib::L2CValue::as_hash(param_3);
        fVar6 = (float)lib::L2CValue::as_number(aLStack128);
        fVar7 = (float)lib::L2CValue::as_number(aLStack144);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar2,fVar6,fVar7,0.0,false,
                   false);
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator=(aLStack128,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar3 = lib::L2CValue::operator==(pLVar4,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar3 & 1) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar3 = lib::L2CValue::operator==(pLVar4,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar3 & 1) == 0) goto LAB_710002cab4;
      lib::L2CValue::L2CValue(aLStack96,false);
      HVar2 = lib::L2CValue::as_hash(param_3);
      fVar6 = (float)lib::L2CValue::as_number(aLStack128);
      fVar7 = (float)lib::L2CValue::as_number(aLStack144);
      bVar1 = lib::L2CValue::as_bool(aLStack96);
      app::lua_bind::MotionModule__change_motion_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar2,fVar6,fVar7,
                 (bool)(bVar1 & 1),0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,false);
      HVar2 = lib::L2CValue::as_hash(param_2);
      fVar6 = (float)lib::L2CValue::as_number(aLStack128);
      fVar7 = (float)lib::L2CValue::as_number(aLStack144);
      bVar1 = lib::L2CValue::as_bool(aLStack96);
      app::lua_bind::MotionModule__change_motion_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar2,fVar6,fVar7,
                 (bool)(bVar1 & 1),0.0,false,false);
    }
    lib::L2CValue::~L2CValue(aLStack96);
  }
LAB_710002cab4:
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

