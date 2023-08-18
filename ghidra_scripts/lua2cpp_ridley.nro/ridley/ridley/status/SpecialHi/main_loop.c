
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRidley::status::SpecialHi_main_loop(L2CFighterRidley *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  int iVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  ulong uVar8;
  BattleObjectModuleAccessor *pBVar9;
  float fVar10;
  uint uVar11;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  undefined8 local_60;
  undefined8 uStack88;
  ulong uStack80;
  undefined8 uStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_RIDLEY_STATUS_SPECIAL_HI_FLAG_START_HOVER);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&uStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&uStack80);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&uStack80,_FIGHTER_RIDLEY_STATUS_SPECIAL_HI_FLAG_START_HOVER);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&uStack80,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&uStack80);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack128,0xc52a24c2f);
      uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      uVar8 = lib::L2CValue::as_integer(aLStack128);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar7,uVar8);
      lib::L2CValue::L2CValue((L2CValue *)&uStack80,fVar10);
      lib::L2CValue::operator_(aLStack112,(L2CValue *)&uStack80);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack128,0xf28c5994f);
      uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      uVar8 = lib::L2CValue::as_integer(aLStack128);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar7,uVar8);
      lib::L2CValue::L2CValue((L2CValue *)&uStack80,fVar10);
      lib::L2CValue::operator_(aLStack112,(L2CValue *)&uStack80);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&uStack80,GROUND_CORRECT_KIND_AIR);
    GVar4 = lib::L2CValue::as_integer((L2CValue *)&uStack80);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
    lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    lib::L2CValue::L2CValue(aLStack144,_ENERGY_MOTION_RESET_TYPE_AIR_TRANS);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
    iVar5 = lib::L2CValue::as_integer(aLStack144);
    uVar7 = lib::L2CValue::as_number(aLStack160);
    uVar11 = lib::L2CValue::as_number(aLStack176);
    uStack80 = uVar7 & 0xffffffff | (ulong)uVar11 << 0x20;
    uStack88 = LUA_SCRIPT_LINE_MAP_CORRECTION;
    local_60 = LUA_SCRIPT_LINE_STATUS_SHIFT;
    uStack72 = 0;
    app::KineticUtility::reset_enable_energy
              (iVar3,pBVar9,iVar5,(Vector2f *)&uStack80,(Vector3f *)&local_60);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue((L2CValue *)&uStack80,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&uStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    app::sv_kinetic_energy::set_speed_mul(this->luaStateAgent);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&uStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&uStack80);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&uStack80,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_HI_HOVER);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

