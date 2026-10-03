
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710016ffe0(long param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5)

{
  byte bVar1;
  Hash40 HVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  float fVar6;
  float fVar7;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  HVar2 = app::lua_bind::MotionModule__motion_kind_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack128,HVar2);
  fVar6 = (float)app::lua_bind::MotionModule__frame_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack144,fVar6);
  fVar6 = (float)app::lua_bind::MotionModule__rate_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack160,fVar6);
  lib::L2CValue::L2CValue(aLStack112,false);
  uVar3 = lib::L2CValue::operator==(param_4,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar3 & 1) == 0) {
    pLVar4 = (L2CValue *)(param_1 + 200);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar3 = lib::L2CValue::operator==(pLVar5,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar3 & 1) != 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x17);
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar3 = lib::L2CValue::operator==(pLVar5,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar3 & 1) == 0) {
        HVar2 = lib::L2CValue::as_hash(param_2);
        fVar6 = (float)lib::L2CValue::as_number(aLStack144);
        fVar7 = (float)lib::L2CValue::as_number(aLStack160);
        app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar2,fVar6,fVar7,0.0,false,
                   false);
        goto LAB_710017032c;
      }
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x16);
    lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
    uVar3 = lib::L2CValue::operator==(pLVar5,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar3 & 1) != 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x17);
      lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
      uVar3 = lib::L2CValue::operator==(pLVar4,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar3 & 1) == 0) {
        HVar2 = lib::L2CValue::as_hash(param_3);
        fVar6 = (float)lib::L2CValue::as_number(aLStack144);
        fVar7 = (float)lib::L2CValue::as_number(aLStack160);
        app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar2,fVar6,fVar7,0.0,false,
                   false);
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::operator=(aLStack144,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar3 = lib::L2CValue::operator==(pLVar4,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar3 & 1) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
      lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
      uVar3 = lib::L2CValue::operator==(pLVar4,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar3 & 1) != 0) {
        HVar2 = lib::L2CValue::as_hash(param_3);
        fVar6 = (float)lib::L2CValue::as_number(aLStack144);
        fVar7 = (float)lib::L2CValue::as_number(aLStack160);
        bVar1 = lib::L2CValue::as_bool(param_5);
        app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar2,fVar6,fVar7,
                   (bool)(bVar1 & 1),0.0,false,false);
      }
    }
    else {
      HVar2 = lib::L2CValue::as_hash(param_2);
      fVar6 = (float)lib::L2CValue::as_number(aLStack144);
      fVar7 = (float)lib::L2CValue::as_number(aLStack160);
      bVar1 = lib::L2CValue::as_bool(param_5);
      app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar2,fVar6,fVar7,
                 (bool)(bVar1 & 1),0.0,false,false);
    }
  }
LAB_710017032c:
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

