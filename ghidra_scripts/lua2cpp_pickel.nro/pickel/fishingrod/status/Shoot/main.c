
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPickelFishingrod::status::Shoot_main
          (L2CWeaponPickelFishingrod *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  BattleObjectModuleAccessor *pBVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  void **ppvStack64;
  lua_State *plStack56;
  
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,0x10abbfb75a);
  lib::L2CValue::L2CValue(aLStack96,0xb689d7a09);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&stack0xffffffffffffffc0);
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack80,fVar7);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,0x10abbfb75a);
  lib::L2CValue::L2CValue(aLStack112,0x1232042400);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&stack0xffffffffffffffc0);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack96,fVar7);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::L2CValue(aLStack128,0x10abbfb75a);
  lib::L2CValue::L2CValue(aLStack144,0xb673ac1f6);
  pLVar5 = (L2CValue *)lib::L2CValue::as_integer(aLStack128);
  uVar3 = lib::L2CValue::as_integer(aLStack144);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (this->moduleAccessor,(ulong)pLVar5,uVar3);
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,fVar7);
  lib::L2CAgent::math_rad((L2CAgent *)&stack0xffffffffffffffc0,pLVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CAgent::math_cos((L2CAgent *)aLStack112,pLVar5);
  lib::L2CValue::operator_(aLStack144,aLStack80);
  fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,fVar7);
  pLVar5 = aLStack160;
  lib::L2CValue::operator_((L2CValue *)&stack0xffffffffffffffc0,pLVar5);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CAgent::math_sin((L2CAgent *)aLStack112,pLVar5);
  lib::L2CValue::operator_((L2CValue *)&stack0xffffffffffffffc0,aLStack80);
  lib::L2CValue::_L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  lib::L2CValue::L2CValue(aLStack160,0);
  pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
  uVar8 = lib::L2CValue::as_number(aLStack128);
  uVar9 = lib::L2CValue::as_number(aLStack144);
  uVar10 = lib::L2CValue::as_number(aLStack160);
  ppvStack64 = (void **)CONCAT44(uVar9,uVar8);
  plStack56 = (lua_State *)(ulong)uVar10;
  fVar7 = (float)lib::L2CValue::as_number(aLStack96);
  app::WeaponSpecializer_PickelFishingrod::start_shoot
            (pBVar6,(Vector3f *)&stack0xffffffffffffffc0,fVar7);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue
            ((L2CValue *)&stack0xffffffffffffffc0,_WEAPON_PICKEL_FISHINGROD_AREA_KIND_FIND_WATER);
  lib::L2CValue::L2CValue(aLStack160,true);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&stack0xffffffffffffffc0);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  app::lua_bind::AreaModule__enable_area_impl(this->moduleAccessor,iVar2,(bool)(bVar1 & 1),-1);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&stack0xffffffffffffffc0);
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

