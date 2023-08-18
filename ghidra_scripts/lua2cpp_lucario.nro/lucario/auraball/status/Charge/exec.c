
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponLucarioAuraball::status::Charge_exec(L2CWeaponLucarioAuraball *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  L2CValue *this_00;
  BattleObjectModuleAccessor *pBVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_LUCARIO_AURABALL_INSTANCE_WORK_ID_INT_OWNER_FT_KIND);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_LUCARIO_AURABALL_INSTANCE_WORK_ID_INT_CHARGE_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::L2CValue
            (aLStack128,_WEAPON_LUCARIO_AURABALL_INSTANCE_WORK_ID_INT_PARAM_MAX_CHARGE_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack112,iVar1);
  uVar2 = lib::L2CValue::operator_(aLStack80,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar2 & 1) != 0) {
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    pBVar3 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this_00);
    app::WeaponSpecializer_LucarioAuraball::set_scale(pBVar3);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_LUCARIO_AURABALL_INSTANCE_WORK_ID_INT_CHARGE_FRAME);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_LUCARIO_AURABALL_INSTANCE_WORK_ID_INT_CHARGE_FRAME);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack80,iVar1);
    lib::L2CValue::L2CValue
              (aLStack128,_WEAPON_LUCARIO_AURABALL_INSTANCE_WORK_ID_INT_PARAM_MAX_CHARGE_FRAME);
    iVar1 = lib::L2CValue::as_integer(aLStack128);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack112,iVar1);
    uVar2 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0xe2db7a474);
      lib::L2CValue::L2CValue(aLStack128,0x1036ff0ecd);
      uVar2 = lib::L2CValue::as_integer(aLStack112);
      uVar4 = lib::L2CValue::as_integer(aLStack128);
      fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar2,uVar4);
      lib::L2CValue::L2CValue(aLStack96,fVar5);
      lib::L2CValue::L2CValue(aLStack160,0xe2db7a474);
      lib::L2CValue::L2CValue(aLStack176,0x14dee29e0e);
      uVar2 = lib::L2CValue::as_integer(aLStack160);
      uVar4 = lib::L2CValue::as_integer(aLStack176);
      fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar2,uVar4);
      lib::L2CValue::L2CValue(aLStack144,fVar5);
      lib::L2CValue::operator_(aLStack96,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      fVar5 = (float)lib::L2CValue::as_number(aLStack80);
      app::lua_bind::AttackModule__set_attack_scale_impl(this->moduleAccessor,fVar5,false);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  FUN_7100002520(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

