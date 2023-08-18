
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLucario::status::SpecialHiRush_main_loop(L2CFighterLucario *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  GroundCorrectKind GVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  void *pvVar8;
  L2CValue *pLVar9;
  KineticEnergy *pKVar10;
  L2CValue *pLVar11;
  L2CValue *pLVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
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
  
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack224,false);
  uVar6 = lib::L2CValue::operator__(aLStack128,aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  if ((uVar6 & 1) == 0) {
LAB_710001be18:
    lib::L2CValue::_L2CValue(aLStack128);
  }
  else {
    this_00 = &this->globalTable;
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack224,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack224);
    lib::L2CValue::_L2CValue(aLStack224);
    if ((uVar6 & 1) == 0) {
LAB_710001bde0:
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack224,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack224);
      lib::L2CValue::_L2CValue(aLStack224);
      if ((uVar6 & 1) != 0) goto LAB_710001be18;
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack224,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack224);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar6 & 1) != 0) goto LAB_710001be64;
    }
    else {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack224,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack224);
      lib::L2CValue::_L2CValue(aLStack224);
      if ((uVar6 & 1) == 0) goto LAB_710001bde0;
      lib::L2CValue::_L2CValue(aLStack128);
LAB_710001be64:
      FUN_710001bb60(this);
    }
  }
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  if ((bVar2 & 1U) != 0) {
    iVar3 = 1;
    goto LAB_710001c828;
  }
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack224,true);
  uVar6 = lib::L2CValue::operator__(aLStack128,aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar6 & 1) == 0) {
LAB_710001bfbc:
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack224);
    lib::L2CValue::_L2CValue(aLStack224);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_LUCARIO_STATUS_KIND_SPECIAL_HI_RUSH_END);
      FUN_710001cb40(this,aLStack160);
      lib::L2CValue::_L2CValue(aLStack160);
    }
    iVar3 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    lib::L2CValue::L2CValue(aLStack224,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(aLStack128,aLStack224);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,GROUND_TOUCH_FLAG_DOWN);
      uVar4 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
      lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack224);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack224,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        iVar3 = lib::L2CValue::as_integer(aLStack224);
        pvVar8 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack128,pvVar8);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::L2CValue(aLStack176,0.0);
        lib::L2CValue::L2CValue(aLStack192,0.0);
        lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x50,(L2CValue)0x40);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
        pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
        pKVar10 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack128);
        uVar17 = app::lua_bind::KineticEnergy__get_speed_impl(pKVar10);
        lib::L2CValue::L2CValue(aLStack224,(float)uVar17);
        lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar17 >> 0x20));
        lib::L2CValue::operator_(pLVar7,aLStack224);
        lib::L2CValue::operator_(pLVar9,aLStack208);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack224);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
        pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
        fVar13 = (float)lib::L2CValue::as_number(pLVar7);
        fVar14 = (float)lib::L2CValue::as_number(pLVar9);
        fVar13 = (float)app::sv_math::vec2_length(fVar13,fVar14);
        lib::L2CValue::L2CValue(aLStack240,fVar13);
        lib::L2CValue::L2CValue(aLStack224,1e-05);
        uVar6 = lib::L2CValue::operator_(aLStack224,aLStack240);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack240);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack256,0.0);
          lib::L2CValue::L2CValue(aLStack272,0.0);
          lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x0,(L2CValue)0xf0);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack256);
          pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
          pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
          lib::L2CValue::L2CValue(aLStack288,GROUND_TOUCH_FLAG_DOWN);
          uVar4 = lib::L2CValue::as_integer(aLStack288);
          uVar17 = app::lua_bind::GroundModule__get_touch_normal_consider_gravity_impl
                             (this->moduleAccessor,uVar4);
          lib::L2CValue::L2CValue(aLStack224,(float)uVar17);
          lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar17 >> 0x20));
          lib::L2CValue::operator_(pLVar7,aLStack224);
          lib::L2CValue::operator_(pLVar9,aLStack208);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack288);
          pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
          pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
          pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
          pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
          fVar13 = (float)lib::L2CValue::as_number(pLVar11);
          fVar14 = (float)lib::L2CValue::as_number(pLVar12);
          uVar17 = app::sv_math::vec2_normalize(fVar13,fVar14);
          lib::L2CValue::L2CValue(aLStack224,(float)uVar17);
          lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar17 >> 0x20));
          lib::L2CValue::operator_(pLVar7,aLStack224);
          lib::L2CValue::operator_(pLVar9,aLStack208);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack224);
          pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
          pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
          pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
          pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
          fVar13 = (float)lib::L2CValue::as_number(pLVar7);
          fVar14 = (float)lib::L2CValue::as_number(pLVar9);
          fVar15 = (float)lib::L2CValue::as_number(pLVar11);
          fVar16 = (float)lib::L2CValue::as_number(pLVar12);
          fVar13 = (float)app::sv_math::vec2_dot(fVar13,fVar14,fVar15,fVar16);
          lib::L2CValue::L2CValue(aLStack288,fVar13);
          lib::L2CValue::L2CValue(aLStack224,1e-05);
          uVar6 = lib::L2CValue::operator_(aLStack224,aLStack288);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack288);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack288,SITUATION_KIND_AIR);
            lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xe0);
            lib::L2CValue::_L2CValue(aLStack288);
            lib::L2CValue::L2CValue(aLStack224,GROUND_CORRECT_KIND_AIR);
            GVar5 = lib::L2CValue::as_integer(aLStack224);
            app::lua_bind::GroundModule__set_correct_impl(this->moduleAccessor,GVar5);
            lib::L2CValue::_L2CValue(aLStack224);
          }
          lib::L2CValue::_L2CValue(aLStack240);
        }
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
      }
    }
    bVar1 = app::lua_bind::GroundModule__is_status_cliff_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack224);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack224);
LAB_710001c59c:
      lib::L2CValue::L2CValue(aLStack240,GROUND_TOUCH_FLAG_DOWN);
      lib::L2CValue::L2CValue(aLStack304,false);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      FUN_710001cc00(aLStack224,this,aLStack240,aLStack304,aLStack320);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack224);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack336,_GROUND_TOUCH_FLAG_LEFT);
        lib::L2CValue::L2CValue(aLStack352,true);
        lib::L2CValue::L2CValue(aLStack368,1.0);
        FUN_710001cc00(aLStack128,this,aLStack336,aLStack352,aLStack368);
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack384,GROUND_TOUCH_FLAG_RIGHT);
          lib::L2CValue::L2CValue(aLStack400,true);
          lib::L2CValue::L2CValue(aLStack416,-1.0);
          FUN_710001cc00(aLStack144,this,aLStack384,aLStack400,aLStack416);
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack448,_GROUND_TOUCH_FLAG_UP);
            lib::L2CValue::L2CValue(aLStack464,false);
            lib::L2CValue::L2CValue(aLStack480,0.0);
            FUN_710001cc00(aLStack432,this,aLStack448,aLStack464,aLStack480);
            lib::L2CValue::operator_cast_to_bool(aLStack432);
            lib::L2CValue::_L2CValue(aLStack432);
            lib::L2CValue::_L2CValue(aLStack480);
            lib::L2CValue::_L2CValue(aLStack464);
            lib::L2CValue::_L2CValue(aLStack448);
          }
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack416);
          lib::L2CValue::_L2CValue(aLStack400);
          lib::L2CValue::_L2CValue(aLStack384);
        }
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::_L2CValue(aLStack336);
      }
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
    }
    else {
      bVar1 = app::lua_bind::GroundModule__can_entry_cliff_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack224);
      if ((bVar2 & 1U) == 0) goto LAB_710001c59c;
      lib::L2CValue::L2CValue(aLStack240,FIGHTER_STATUS_KIND_CLIFF_CATCH_MOVE);
      FUN_710001cb40(this,aLStack240);
    }
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLAG_STATUS_TRANS);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack224);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_INT_NEXT_STATUS);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack224,iVar3);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack144,false);
      iVar3 = lib::L2CValue::as_integer(aLStack224);
      bVar1 = lib::L2CValue::as_bool(aLStack144);
      bVar1 = app::lua_bind::StatusModule__change_status_request_impl
                        (this->moduleAccessor,iVar3,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      FUN_71000101d0(this);
      lib::L2CValue::_L2CValue(aLStack224);
    }
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack224,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack224);
    lib::L2CValue::_L2CValue(aLStack224);
    if ((uVar6 & 1) == 0) {
LAB_710001bf60:
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack224,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack224);
      lib::L2CValue::_L2CValue(aLStack224);
      if ((uVar6 & 1) != 0) {
        lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack224);
        lib::L2CValue::_L2CValue(aLStack224);
        if ((bVar2 & 1U) != 0) goto LAB_710001c820;
      }
      goto LAB_710001bfbc;
    }
    lib::L2CValue::L2CValue(aLStack496,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x10);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack224);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack496);
    if ((bVar2 & 1U) == 0) goto LAB_710001bf60;
  }
LAB_710001c820:
  iVar3 = 0;
LAB_710001c828:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

