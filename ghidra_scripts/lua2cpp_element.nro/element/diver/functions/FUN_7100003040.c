
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100003040(L2CValue *param_1,long param_2,L2CValue *param_3,L2CValue *param_4)

{
  Hash40 HVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  HVar1 = app::lua_bind::MotionModule__motion_kind_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack112,HVar1);
  fVar4 = (float)app::lua_bind::MotionModule__frame_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack128,fVar4);
  fVar4 = (float)app::lua_bind::MotionModule__rate_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack144,fVar4);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar3 = lib::L2CValue::operator==(pLVar2,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if (((uVar3 & 1) == 0) ||
     (uVar3 = lib::L2CValue::operator==(aLStack112,param_3), (uVar3 & 1) != 0)) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_AIR);
    uVar3 = lib::L2CValue::operator==(pLVar2,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if (((uVar3 & 1) == 0) ||
       (uVar3 = lib::L2CValue::operator==(aLStack112,param_4), (uVar3 & 1) != 0)) {
      lib::L2CValue::L2CValue(param_1,false);
    }
    else {
      HVar1 = lib::L2CValue::as_hash(param_4);
      fVar4 = (float)lib::L2CValue::as_number(aLStack128);
      fVar5 = (float)lib::L2CValue::as_number(aLStack144);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar1,fVar4,fVar5,0.0,false,false)
      ;
      lib::L2CValue::L2CValue(param_1,true);
    }
  }
  else {
    HVar1 = lib::L2CValue::as_hash(param_3);
    fVar4 = (float)lib::L2CValue::as_number(aLStack128);
    fVar5 = (float)lib::L2CValue::as_number(aLStack144);
    app::lua_bind::MotionModule__change_motion_inherit_frame_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar1,fVar4,fVar5,0.0,false,false);
    lib::L2CValue::L2CValue(param_1,true);
  }
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

