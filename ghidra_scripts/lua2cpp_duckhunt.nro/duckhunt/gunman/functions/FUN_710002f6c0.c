
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002f6c0(L2CValue *param_1,L2CAgent *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_FLAG_RESULT_SHOT_AFTER)
  ;
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar5 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_FLAG_RESULT_SHOT);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_INT_RESULT_COUNTER)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      lib::L2CValue::L2CValue(aLStack64,5);
      uVar5 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) goto LAB_710002f968;
      lib::L2CValue::L2CValue
                (aLStack80,
                 _WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_INT_RESULT_MUZZLEFLASH_EFFECT_HANDLE_ID);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack64,iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0.001);
      uVar4 = lib::L2CValue::as_integer(aLStack64);
      fVar6 = (float)lib::L2CValue::as_number(aLStack80);
      app::lua_bind::EffectModule__set_rate_impl(param_2->moduleAccessor,uVar4,fVar6);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_FLAG_RESULT_SHOT);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue
                (aLStack64,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_FLAG_RESULT_SHOT_AFTER);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue
                (aLStack80,
                 _WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_INT_RESULT_MUZZLEFLASH_EFFECT_HANDLE_ID);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack64,iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,1.0);
      uVar4 = lib::L2CValue::as_integer(aLStack64);
      fVar6 = (float)lib::L2CValue::as_number(aLStack80);
      app::lua_bind::EffectModule__set_rate_impl(param_2->moduleAccessor,uVar4,fVar6);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,true);
      bVar1 = lib::L2CValue::as_bool(aLStack80);
      app::lua_bind::VisibilityModule__set_whole_impl(param_2->moduleAccessor,(bool)(bVar1 & 1));
    }
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
  }
LAB_710002f968:
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_INT_RESULT_COUNTER);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::L2CValue(aLStack64,200);
  uVar5 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_INT_RESULT_COUNTER);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__inc_int_impl(param_2->moduleAccessor,iVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack64);
    app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_2,1);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

