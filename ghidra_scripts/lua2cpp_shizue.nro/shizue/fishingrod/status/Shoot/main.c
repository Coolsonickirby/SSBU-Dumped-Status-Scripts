
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponShizueFishingrod::status::Shoot_main
          (L2CWeaponShizueFishingrod *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  BattleObjectModuleAccessor *pBVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  void **ppvStack64;
  lua_State *plStack56;
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_SHIZUE_FISHINGROD_INSTANCE_WORK_ID_FLAG_FLICK);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack112);
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::_L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack112,0x10abbfb75a);
    lib::L2CValue::L2CValue(aLStack128,0x1165adab8b);
    uVar4 = lib::L2CValue::as_integer(aLStack112);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,fVar8);
    lib::L2CValue::operator_(aLStack80,(L2CValue *)&stack0xffffffffffffffc0);
    lib::L2CValue::_L2CValue((L2CValue *)&stack0xffffffffffffffc0);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,0x10abbfb75a);
    lib::L2CValue::L2CValue(aLStack128,0x1864e28ea1);
    uVar4 = lib::L2CValue::as_integer(aLStack112);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,fVar8);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)&stack0xffffffffffffffc0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,0x10abbfb75a);
    lib::L2CValue::L2CValue(aLStack128,0xb689d7a09);
    uVar4 = lib::L2CValue::as_integer(aLStack112);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,fVar8);
    lib::L2CValue::operator_(aLStack80,(L2CValue *)&stack0xffffffffffffffc0);
    lib::L2CValue::_L2CValue((L2CValue *)&stack0xffffffffffffffc0);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,0x10abbfb75a);
    lib::L2CValue::L2CValue(aLStack128,0x1232042400);
    uVar4 = lib::L2CValue::as_integer(aLStack112);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,fVar8);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)&stack0xffffffffffffffc0);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128,0x10abbfb75a);
  lib::L2CValue::L2CValue(aLStack144,0xb673ac1f6);
  pLVar6 = (L2CValue *)lib::L2CValue::as_integer(aLStack128);
  uVar4 = lib::L2CValue::as_integer(aLStack144);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (this->moduleAccessor,(ulong)pLVar6,uVar4);
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,fVar8);
  lib::L2CAgent::math_rad((L2CAgent *)&stack0xffffffffffffffc0,pLVar6);
  lib::L2CValue::_L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CAgent::math_cos((L2CAgent *)aLStack112,pLVar6);
  lib::L2CValue::operator_(aLStack144,aLStack80);
  fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,fVar8);
  pLVar6 = aLStack160;
  lib::L2CValue::operator_((L2CValue *)&stack0xffffffffffffffc0,pLVar6);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CAgent::math_sin((L2CAgent *)aLStack112,pLVar6);
  lib::L2CValue::operator_((L2CValue *)&stack0xffffffffffffffc0,aLStack80);
  lib::L2CValue::_L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  lib::L2CValue::L2CValue(aLStack160,0);
  pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
  uVar9 = lib::L2CValue::as_number(aLStack128);
  uVar10 = lib::L2CValue::as_number(aLStack144);
  uVar11 = lib::L2CValue::as_number(aLStack160);
  ppvStack64 = (void **)CONCAT44(uVar10,uVar9);
  plStack56 = (lua_State *)(ulong)uVar11;
  fVar8 = (float)lib::L2CValue::as_number(aLStack96);
  app::WeaponSpecializer_ShizueFishingrod::start_shoot
            (pBVar7,(Vector3f *)&stack0xffffffffffffffc0,fVar8);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,Shoot_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

