
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponShizueFishingrod::status::Reel_main(L2CWeaponShizueFishingrod *this,L2CValue *return_value)

{
  L2CWeaponShizueFishingrod *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  Hash40 HVar7;
  BattleObjectModuleAccessor *pBVar8;
  L2CValue *pLVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  undefined8 uStack88;
  
  lib::L2CValue::L2CValue(aLStack112,0x10abbfb75a);
  lib::L2CValue::L2CValue(aLStack128,0xc8347d887);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar10);
  this_00 = this + 1;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xc8347d887);
  lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x10abbfb75a);
  lib::L2CValue::L2CValue(aLStack128,0x100a9ec453);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar10);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x100a9ec453);
  lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x10abbfb75a);
  lib::L2CValue::L2CValue(aLStack128,0x141b588421);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar10);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x141b588421);
  lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x10abbfb75a);
  lib::L2CValue::L2CValue(aLStack128,0x146c5fb4b7);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar10);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x146c5fb4b7);
  lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x10abbfb75a);
  lib::L2CValue::L2CValue(aLStack128,0x183f6190d8);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar10);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x183f6190d8);
  lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x10abbfb75a);
  lib::L2CValue::L2CValue(aLStack128,0x155aa895ab);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x155aa895ab);
  lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_SHIZUE_FISHINGROD_INSTANCE_WORK_ID_FLAG_HIT);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0x4f2e00c51);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar7 = lib::L2CValue::as_hash((L2CValue *)&local_60);
    fVar10 = (float)lib::L2CValue::as_number(aLStack112);
    fVar11 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar7,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_60);
    app::lua_bind::MotionModule__set_recalc_ik_impl(this->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0x35ad22641);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar7 = lib::L2CValue::as_hash((L2CValue *)&local_60);
    fVar10 = (float)lib::L2CValue::as_number(aLStack112);
    fVar11 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar7,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
    app::WeaponSpecializer_ShizueFishingrod::start_hit_reel(pBVar8);
  }
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_SHIZUE_FISHINGROD_INSTANCE_WORK_ID_FLAG_HOOK);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_SHIZUE_FISHINGROD_SEARCH_NO_HOOK);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::SearchModule__is_search_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x100a9ec453);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x183f6190d8);
      lib::L2CValue::operator_(pLVar6,pLVar9);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_60);
      app::WeaponSpecializer_ShizueFishingrod::enable_search(pBVar8,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_60);
      app::WeaponSpecializer_ShizueFishingrod::enable_search(pBVar8,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_SHIZUE_FISHINGROD_SEARCH_NO_HOOK);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      fVar10 = (float)lib::L2CValue::as_number(aLStack112);
      app::lua_bind::SearchModule__set_size_impl(this->moduleAccessor,iVar3,fVar10);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_SHIZUE_FISHINGROD_AREA_KIND_ITEM_SEARCH);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x141b588421);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x146c5fb4b7);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      uVar4 = lib::L2CValue::as_number(pLVar6);
      uVar12 = lib::L2CValue::as_number(pLVar9);
      local_60 = uVar4 & 0xffffffff | (ulong)uVar12 << 0x20;
      uStack88 = 0;
      fVar10 = (float)lib::L2CValue::as_number(aLStack112);
      app::lua_bind::AreaModule__set_area_shape_circle_impl
                (this->moduleAccessor,iVar3,(Vector2f *)&local_60,fVar10);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_WEAPON_SHIZUE_FISHINGROD_INSTANCE_WORK_ID_FLAG_ENABLE_HOOK);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack112);
    }
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
  app::WeaponSpecializer_ShizueFishingrod::setup_physics_air_resistance(pBVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,Reel_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  return;
}

