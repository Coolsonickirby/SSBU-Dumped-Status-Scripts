
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterLucas::status::Throw_init(L2CFighterLucas *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  ulong uVar5;
  L2CValue *this_00;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCAS_INSTANCE_WORK_ID_FLAG_THROW_LW_EFFECT_ON);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCAS_INSTANCE_WORK_ID_FLAG_THROW_LW_EFFECT_OFF);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCAS_INSTANCE_WORK_ID_FLAG_THROW_LW_EFFECT_UPDATE);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCAS_INSTANCE_WORK_ID_FLAG_THROW_LW_EFFECT_Z_ZERO);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_EFFECT_HANDLE_NULL);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUCAS_INSTANCE_WORK_ID_INT_THROW_LW_EFFECT_HANDLE);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,LINK_NO_CAPTURE);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  uVar3 = app::lua_bind::LinkModule__get_node_object_id_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,uVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  uVar3 = lib::L2CValue::as_integer(aLStack80);
  pvVar4 = (void *)app::sv_battle_object::module_accessor(uVar3);
  if (pvVar4 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SYSTEM);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,pvVar4);
  }
  uVar3 = lib::L2CValue::as_integer(aLStack80);
  uVar3 = app::sv_battle_object::category(uVar3);
  lib::L2CValue::L2CValue(aLStack112,uVar3 & 0xff);
  lib::L2CValue::L2CValue(aLStack64,_BATTLE_OBJECT_CATEGORY_FIGHTER);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
    this_00 = aLStack112;
  }
  else {
    uVar3 = lib::L2CValue::as_integer(aLStack80);
    uVar3 = app::sv_battle_object::kind(uVar3);
    lib::L2CValue::L2CValue(aLStack128,uVar3);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIND_GAMEWATCH);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) goto LAB_7100006fac;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCAS_INSTANCE_WORK_ID_FLAG_THROW_LW_EFFECT_Z_ZERO);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
    this_00 = aLStack64;
  }
  lib::L2CValue::_L2CValue(this_00);
LAB_7100006fac:
  lua2cpp::L2CFighterCommon::sub_throw_uniq_process_init(this);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

