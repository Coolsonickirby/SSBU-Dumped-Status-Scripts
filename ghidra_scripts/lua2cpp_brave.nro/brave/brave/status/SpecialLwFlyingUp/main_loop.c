
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialLwFlyingUp_main_loop(L2CFighterBrave *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  BattleObjectModuleAccessor *pBVar5;
  ulong uVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  long lVar12;
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
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
  ulong local_60;
  ulong uStack88;
  
  fVar7 = (float)app::lua_bind::PostureModule__pos_x_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,fVar7);
  fVar7 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,fVar7);
  fVar7 = (float)app::lua_bind::PostureModule__pos_z_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,fVar7);
  lib::L2CValue::L2CValue(aLStack160,-5.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  uVar11 = lib::L2CValue::as_number(aLStack112);
  lVar12 = lib::L2CValue::as_number(aLStack128);
  uVar8 = lib::L2CValue::as_number(aLStack144);
  local_60 = uVar11 & 0xffffffff | lVar12 << 0x20;
  uStack88 = (ulong)uVar8;
  fVar7 = (float)lib::L2CValue::as_number(aLStack160);
  fVar9 = (float)lib::L2CValue::as_number(aLStack176);
  iVar3 = app::GroundUtility::check_dead_area2((Vector3f *)&local_60,fVar7,fVar9);
  lib::L2CValue::L2CValue(aLStack368,iVar3);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_GROUND_DEAD_AREA_CHECK_RESULT_OUTSIDE_UP);
  uVar11 = lib::L2CValue::operator__(aLStack368,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar11 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_60);
    app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_60);
    app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
    uVar11 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar11 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,false);
      FUN_710001ba40(aLStack112,this,aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,&DAT_710001bca0);
    lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_KINETIC_TYPE_RESET);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,&DAT_710001bd00);
    lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    goto LAB_710001b804;
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_TRANSITION_TERM_ID_STOP_CEIL);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) == 0) {
LAB_710001b7dc:
    lib::L2CValue::L2CValue(aLStack384,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_GROUND_TOUCH_FLAG_UP);
    uVar8 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar8);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
    if ((bVar2 & 1U) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      lib::L2CValue::L2CValue(aLStack160,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack176,0x1b8b640472);
      uVar11 = lib::L2CValue::as_integer(aLStack160);
      uVar6 = lib::L2CValue::as_integer(aLStack176);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar11,uVar6);
      lib::L2CValue::L2CValue(aLStack144,fVar7);
      lib::L2CValue::L2CValue(aLStack208,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack224,0x1bdbfa0c18);
      uVar11 = lib::L2CValue::as_integer(aLStack208);
      uVar6 = lib::L2CValue::as_integer(aLStack224);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar11,uVar6);
      lib::L2CValue::L2CValue(aLStack192,fVar7);
      lib::L2CValue::L2CValue(aLStack256,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack272,0x1be7f73341);
      uVar11 = lib::L2CValue::as_integer(aLStack256);
      uVar6 = lib::L2CValue::as_integer(aLStack272);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar11,uVar6);
      lib::L2CValue::L2CValue(aLStack240,fVar7);
      pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
      fVar7 = (float)lib::L2CValue::as_number(aLStack144);
      fVar9 = (float)lib::L2CValue::as_number(aLStack192);
      fVar10 = (float)lib::L2CValue::as_number(aLStack240);
      bVar1 = app::FighterSpecializer_Brave::check_flying_ceil(pBVar5,fVar7,fVar9,fVar10);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
      if ((bVar2 & 1U) != 0) {
        bVar2 = true;
        goto LAB_710001b634;
      }
      uVar11 = 0;
LAB_710001b6f4:
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
    }
    else {
      bVar2 = false;
LAB_710001b634:
      lib::L2CValue::L2CValue(aLStack304,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar3 = lib::L2CValue::as_integer(aLStack304);
      fVar7 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack288,fVar7);
      lib::L2CValue::L2CValue(aLStack336,0xcad2ee25e);
      lib::L2CValue::L2CValue(aLStack352,0x1b64be9c84);
      uVar11 = lib::L2CValue::as_integer(aLStack336);
      uVar6 = lib::L2CValue::as_integer(aLStack352);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar11,uVar6);
      lib::L2CValue::L2CValue(aLStack320,fVar7);
      uVar11 = lib::L2CValue::operator__(aLStack320,aLStack288);
      uVar11 = uVar11 & 0xffffffff;
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack304);
      if (bVar2) goto LAB_710001b6f4;
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar11 & 1) == 0) goto LAB_710001b7dc;
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,SITUATION_KIND_AIR);
    uVar11 = lib::L2CValue::operator__(pLVar4,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar11 & 1) == 0) goto LAB_710001b7dc;
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_FLYING_STOP_CEIL);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue(aLStack384,1);
  }
  lib::L2CValue::operator_cast_to_bool(aLStack384);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710001b804:
  lib::L2CValue::_L2CValue(aLStack368);
  return;
}

