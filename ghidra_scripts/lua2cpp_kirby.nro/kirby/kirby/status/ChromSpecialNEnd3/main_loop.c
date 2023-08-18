
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::ChromSpecialNEnd3_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  ulong uVar9;
  int iVar10;
  float fVar11;
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
  
  bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar7 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack128);
LAB_7100180e08:
    bVar3 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar4 & 1U) == 0) {
LAB_7100180f28:
      bVar3 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar3 & 1));
      lib::L2CValue::L2CValue(aLStack112,false);
      uVar7 = lib::L2CValue::operator__(aLStack128,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      this_00 = &this->globalTable;
      if ((uVar7 & 1) != 0) {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
        uVar7 = lib::L2CValue::operator__(pLVar8,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar7 & 1) == 0) {
LAB_7100180fe8:
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
          lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
          uVar7 = lib::L2CValue::operator__(pLVar8,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar7 & 1) == 0) {
            pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
            lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
            uVar7 = lib::L2CValue::operator__(pLVar8,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar7 & 1) != 0) goto LAB_7100181058;
          }
        }
        else {
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
          uVar7 = lib::L2CValue::operator__(pLVar8,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar7 & 1) == 0) goto LAB_7100180fe8;
LAB_7100181058:
          FUN_7100180340(this);
        }
      }
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,8);
      lib::L2CValue::L2CValue(aLStack112,false);
      uVar7 = lib::L2CValue::operator__(pLVar8,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) == 0) {
LAB_71001810d4:
        lib::L2CValue::L2CValue(aLStack128,0);
        lib::L2CValue::L2CValue(aLStack144,0);
        lib::L2CValue::L2CValue(aLStack160,0);
        lib::L2CValue::L2CValue(aLStack176,0);
        lib::L2CValue::L2CValue(aLStack192,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack208,0x1ab49df8af);
        uVar7 = lib::L2CValue::as_integer(aLStack192);
        uVar9 = lib::L2CValue::as_integer(aLStack208);
        iVar5 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar7,uVar9);
        lib::L2CValue::L2CValue(aLStack112,iVar5);
        lib::L2CValue::operator_(aLStack160,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::L2CValue(aLStack256,_FIGHTER_ROY_STATUS_SPECIAL_N_WORK_FLOAT_CHARGE_COUNT);
        iVar5 = lib::L2CValue::as_integer(aLStack256);
        fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack240,fVar11);
        lib::L2CValue::L2CValue(aLStack112,30.0);
        lib::L2CValue::operator_(aLStack240,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack272,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack288,0x1a807f5f7a);
        uVar7 = lib::L2CValue::as_integer(aLStack272);
        uVar9 = lib::L2CValue::as_integer(aLStack288);
        iVar5 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar7,uVar9);
        lib::L2CValue::L2CValue(aLStack112,iVar5);
        lib::L2CValue::operator_(aLStack224,aLStack112);
        lib::L2CValue::operator_(aLStack160,aLStack208);
        lib::L2CValue::operator_(aLStack128,aLStack192);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack256);
        uVar7 = app::lua_bind::AttackModule__part_size_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack112,uVar7);
        lib::L2CValue::operator_(aLStack144,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        iVar5 = lib::L2CValue::as_integer(aLStack144);
        if (0 < iVar5) {
          iVar10 = 0;
          do {
            lib::L2CValue::L2CValue(aLStack192,iVar10);
            iVar6 = lib::L2CValue::as_integer(aLStack192);
            bVar3 = app::lua_bind::AttackModule__is_attack_impl(this->moduleAccessor,iVar6,false);
            lib::L2CValue::L2CValue(aLStack208,(bool)(bVar3 & 1));
            lib::L2CValue::L2CValue(aLStack112,true);
            uVar7 = lib::L2CValue::operator__(aLStack208,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack208);
            if ((uVar7 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack208,false);
              iVar6 = lib::L2CValue::as_integer(aLStack192);
              bVar3 = lib::L2CValue::as_bool(aLStack208);
              fVar11 = (float)app::lua_bind::AttackModule__get_power_impl
                                        (this->moduleAccessor,iVar6,(bool)(bVar3 & 1),1.0,false);
              lib::L2CValue::L2CValue(aLStack112,fVar11);
              lib::L2CValue::operator_(aLStack176,aLStack112);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::_L2CValue(aLStack208);
              lib::L2CValue::L2CValue(aLStack112,0.001);
              uVar7 = lib::L2CValue::operator_(aLStack112,aLStack176);
              lib::L2CValue::_L2CValue(aLStack112);
              if ((uVar7 & 1) != 0) {
                lib::L2CValue::L2CValue(aLStack112,false);
                iVar6 = lib::L2CValue::as_integer(aLStack192);
                fVar11 = (float)lib::L2CValue::as_number(aLStack128);
                bVar3 = lib::L2CValue::as_bool(aLStack112);
                app::lua_bind::AttackModule__set_power_impl
                          (this->moduleAccessor,iVar6,fVar11,(bool)(bVar3 & 1));
                lib::L2CValue::_L2CValue(aLStack112);
              }
            }
            lib::L2CValue::_L2CValue(aLStack192);
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar5);
        }
        lib::L2CValue::L2CValue(aLStack304,0);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack112,0);
        uVar7 = lib::L2CValue::operator__(aLStack304,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack304);
        if ((uVar7 & 1) == 0) goto LAB_7100181498;
        iVar5 = 0;
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,0);
        lib::L2CValue::L2CValue(aLStack112,0);
        uVar7 = lib::L2CValue::operator__(aLStack128,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar7 & 1) != 0) goto LAB_71001810d4;
LAB_7100181498:
        iVar5 = 1;
      }
      lib::L2CValue::L2CValue(aLStack112,iVar5);
    }
    else {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar8,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      cVar1 = (char)&stack0xfffffffffffffff0;
      if ((uVar7 & 1) == 0) {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
        uVar7 = lib::L2CValue::operator__(pLVar8,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar7 & 1) == 0) goto LAB_7100180f28;
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack128,false);
        lua2cpp::L2CFighterBase::change_status
                  (this,(L2CValue)(cVar1 + -0x60),(L2CValue)(cVar1 + -0x70));
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack128,false);
        lua2cpp::L2CFighterBase::change_status
                  (this,(L2CValue)(cVar1 + -0x60),(L2CValue)(cVar1 + -0x70));
      }
      lib::L2CValue::_L2CValue(aLStack128);
    }
    lVar2 = -0x60;
  }
  else {
    lib::L2CValue::L2CValue(aLStack320,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0xc0);
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar7 = lib::L2CValue::operator__(aLStack144,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack112,false);
      uVar7 = lib::L2CValue::operator__(aLStack160,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar7 & 1) == 0) goto LAB_71001814ac;
      goto LAB_7100180e08;
    }
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack320);
    lVar2 = -0x70;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
LAB_71001814ac:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

