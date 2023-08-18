
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSheik::status::SpecialHiMove_exec(L2CFighterSheik *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  L2CValue aLStack368 [16];
  undefined auStack352 [32];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack288,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar3 = lib::L2CValue::as_integer(aLStack288);
  fVar8 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack256,fVar8);
  lib::L2CValue::operator_(aLStack208,aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::L2CValue(aLStack288,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar3 = lib::L2CValue::as_integer(aLStack288);
  fVar8 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack256,fVar8);
  lib::L2CValue::operator_(aLStack144,aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack288);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack256,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::operator_(aLStack192,aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::operator_(aLStack160,aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack224,0xa85612d80);
    uVar6 = lib::L2CValue::as_integer(aLStack112);
    uVar7 = lib::L2CValue::as_integer(aLStack224);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue(aLStack256,90.0);
    pLVar5 = aLStack256;
    lib::L2CValue::operator_(aLStack96,pLVar5);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CAgent::math_rad((L2CAgent *)auStack352,pLVar5);
    lib::L2CValue::operator_(aLStack176,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack288,_GROUND_TOUCH_FLAG_UP);
    uVar4 = lib::L2CValue::as_integer(aLStack288);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
    lib::L2CValue::L2CValue(aLStack256,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack288);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_GROUND_TOUCH_FLAG_UP);
      uVar4 = lib::L2CValue::as_integer(aLStack112);
      uVar12 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar4);
      lib::L2CValue::L2CValue(aLStack256,(float)uVar12);
      lib::L2CValue::L2CValue(aLStack240,(float)((ulong)uVar12 >> 0x20));
      lib::L2CValue::L2CValue(aLStack288,aLStack256);
      lib::L2CValue::L2CValue((L2CValue *)auStack352,aLStack240);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xe0,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue((L2CValue *)auStack352);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack112);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
      lib::L2CValue::operator_(aLStack192,pLVar5);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
      lib::L2CValue::operator_(aLStack160,pLVar5);
      fVar8 = (float)lib::L2CValue::as_number(aLStack208);
      fVar9 = (float)lib::L2CValue::as_number(aLStack144);
      fVar10 = (float)lib::L2CValue::as_number(aLStack192);
      fVar11 = (float)lib::L2CValue::as_number(aLStack160);
      fVar8 = (float)app::sv_math::vec2_angle(fVar8,fVar9,fVar10,fVar11);
      lib::L2CValue::L2CValue(aLStack224,fVar8);
      lib::L2CValue::_L2CValue(aLStack224);
      uVar6 = lib::L2CValue::operator_(aLStack176,aLStack128);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack288,_FT_SHEIK_STATUS_SPECIAL_HI_FLAG_MOVE_END);
        iVar3 = lib::L2CValue::as_integer(aLStack288);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack288);
      }
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue((L2CValue *)auStack352,GROUND_TOUCH_FLAG_RIGHT);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack352);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
    lib::L2CValue::L2CValue(aLStack288,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack304,GROUND_TOUCH_FLAG_RIGHT);
      uVar4 = lib::L2CValue::as_integer(aLStack304);
      uVar12 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar4);
      lib::L2CValue::L2CValue(aLStack288,(float)uVar12);
      lib::L2CValue::L2CValue(aLStack272,(float)((ulong)uVar12 >> 0x20));
      lib::L2CValue::L2CValue((L2CValue *)auStack352,aLStack288);
      lib::L2CValue::L2CValue(aLStack96,aLStack272);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xa0,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue((L2CValue *)auStack352);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack304);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
      lib::L2CValue::operator_(aLStack192,pLVar5);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
      lib::L2CValue::operator_(aLStack160,pLVar5);
      fVar8 = (float)lib::L2CValue::as_number(aLStack208);
      fVar9 = (float)lib::L2CValue::as_number(aLStack144);
      fVar10 = (float)lib::L2CValue::as_number(aLStack192);
      fVar11 = (float)lib::L2CValue::as_number(aLStack160);
      fVar8 = (float)app::sv_math::vec2_angle(fVar8,fVar9,fVar10,fVar11);
      lib::L2CValue::L2CValue(aLStack304,fVar8);
      lib::L2CValue::_L2CValue(aLStack304);
      uVar6 = lib::L2CValue::operator_(aLStack176,aLStack128);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack352,_FT_SHEIK_STATUS_SPECIAL_HI_FLAG_MOVE_END);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack352);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue((L2CValue *)auStack352);
      }
      lib::L2CValue::_L2CValue(aLStack112);
    }
    lib::L2CValue::L2CValue(aLStack96,_GROUND_TOUCH_FLAG_LEFT);
    uVar4 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack352,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack352);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack368,_GROUND_TOUCH_FLAG_LEFT);
      uVar4 = lib::L2CValue::as_integer(aLStack368);
      uVar12 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar4);
      lib::L2CValue::L2CValue((L2CValue *)auStack352,(float)uVar12);
      pLVar5 = (L2CValue *)(auStack352 + 0x10);
      lib::L2CValue::L2CValue(pLVar5,(float)((ulong)uVar12 >> 0x20));
      lib::L2CValue::L2CValue(aLStack96,(L2CValue *)auStack352);
      lib::L2CValue::L2CValue(aLStack112,pLVar5);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xa0,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(pLVar5);
      lib::L2CValue::_L2CValue((L2CValue *)auStack352);
      lib::L2CValue::_L2CValue(aLStack368);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack320,0x18cdc1683);
      lib::L2CValue::operator_(aLStack192,pLVar5);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack320,0x1fbdb2615);
      lib::L2CValue::operator_(aLStack160,pLVar5);
      fVar8 = (float)lib::L2CValue::as_number(aLStack208);
      fVar9 = (float)lib::L2CValue::as_number(aLStack144);
      fVar10 = (float)lib::L2CValue::as_number(aLStack192);
      fVar11 = (float)lib::L2CValue::as_number(aLStack160);
      fVar8 = (float)app::sv_math::vec2_angle(fVar8,fVar9,fVar10,fVar11);
      lib::L2CValue::L2CValue(aLStack368,fVar8);
      lib::L2CValue::_L2CValue(aLStack368);
      uVar6 = lib::L2CValue::operator_(aLStack176,aLStack128);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FT_SHEIK_STATUS_SPECIAL_HI_FLAG_MOVE_END);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack96);
      }
      lib::L2CValue::_L2CValue(aLStack320);
    }
  }
  lib::L2CValue::L2CValue(aLStack112,_FT_SHEIK_STATUS_SPECIAL_HI_FLAG_MOVE_END);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FT_SHEIK_STATUS_SPECIAL_HI_FLAG_MOVE_END);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SHEIK_STATUS_KIND_SPECIAL_HI_END);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

