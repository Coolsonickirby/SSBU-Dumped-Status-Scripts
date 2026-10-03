
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001a510(L2CValue *param_1,long param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5)

{
  byte bVar1;
  Hash40 HVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  float fVar5;
  float fVar6;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  HVar2 = app::lua_bind::MotionModule__motion_kind_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack128,HVar2);
  fVar5 = (float)app::lua_bind::MotionModule__frame_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack144,fVar5);
  fVar5 = (float)app::lua_bind::MotionModule__rate_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack160,fVar5);
  lib::L2CValue::L2CValue(aLStack112,false);
  uVar3 = lib::L2CValue::operator==(param_5,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar3 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar3 = lib::L2CValue::operator==(pLVar4,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if (((uVar3 & 1) != 0) &&
       (uVar3 = lib::L2CValue::operator==(aLStack128,param_3), (uVar3 & 1) == 0)) {
      HVar2 = lib::L2CValue::as_hash(param_3);
      fVar5 = (float)lib::L2CValue::as_number(aLStack144);
      fVar6 = (float)lib::L2CValue::as_number(aLStack160);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar2,fVar5,fVar6,0.0,false,false)
      ;
      lib::L2CValue::L2CValue(param_1,true);
      goto LAB_710001a890;
    }
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x16);
    lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
    uVar3 = lib::L2CValue::operator==(pLVar4,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if (((uVar3 & 1) != 0) &&
       (uVar3 = lib::L2CValue::operator==(aLStack128,param_4), (uVar3 & 1) == 0)) {
      HVar2 = lib::L2CValue::as_hash(param_4);
      fVar5 = (float)lib::L2CValue::as_number(aLStack144);
      fVar6 = (float)lib::L2CValue::as_number(aLStack160);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar2,fVar5,fVar6,0.0,false,false)
      ;
      lib::L2CValue::L2CValue(param_1,true);
      goto LAB_710001a890;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::operator=(aLStack144,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::operator=(aLStack160,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar3 = lib::L2CValue::operator==(pLVar4,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if (((uVar3 & 1) == 0) ||
       (uVar3 = lib::L2CValue::operator==(aLStack128,param_3), (uVar3 & 1) != 0)) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x16);
      lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
      uVar3 = lib::L2CValue::operator==(pLVar4,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if (((uVar3 & 1) == 0) ||
         (uVar3 = lib::L2CValue::operator==(aLStack128,param_4), (uVar3 & 1) != 0))
      goto LAB_710001a884;
      lib::L2CValue::L2CValue(aLStack112,false);
      HVar2 = lib::L2CValue::as_hash(param_4);
      fVar5 = (float)lib::L2CValue::as_number(aLStack144);
      fVar6 = (float)lib::L2CValue::as_number(aLStack160);
      bVar1 = lib::L2CValue::as_bool(aLStack112);
      app::lua_bind::MotionModule__change_motion_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar2,fVar5,fVar6,
                 (bool)(bVar1 & 1),0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,false);
      HVar2 = lib::L2CValue::as_hash(param_3);
      fVar5 = (float)lib::L2CValue::as_number(aLStack144);
      fVar6 = (float)lib::L2CValue::as_number(aLStack160);
      bVar1 = lib::L2CValue::as_bool(aLStack112);
      app::lua_bind::MotionModule__change_motion_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar2,fVar5,fVar6,
                 (bool)(bVar1 & 1),0.0,false,false);
    }
    lib::L2CValue::~L2CValue(aLStack112);
  }
LAB_710001a884:
  lib::L2CValue::L2CValue(param_1,false);
LAB_710001a890:
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

