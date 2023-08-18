
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterJack::status::SpecialLw2Counter_main_loop(L2CFighterJack *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  int iVar6;
  float fVar7;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
LAB_710001f354:
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_JACK_STATUS_SPECIAL_LW2_FLOAT_SHIELD_ATTACK_POWER);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack112,fVar7);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      uVar4 = lib::L2CValue::operator_(aLStack96,aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) {
        uVar4 = app::lua_bind::AttackModule__part_size_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack128,uVar4);
        iVar2 = lib::L2CValue::as_integer(aLStack128);
        if (0 < iVar2) {
          iVar6 = 0;
          do {
            lib::L2CValue::L2CValue(aLStack160,iVar6);
            iVar3 = lib::L2CValue::as_integer(aLStack160);
            bVar1 = app::lua_bind::AttackModule__is_attack_impl(this->moduleAccessor,iVar3,false);
            lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
            lib::L2CValue::L2CValue(aLStack96,true);
            uVar4 = lib::L2CValue::operator__(aLStack176,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack176);
            if ((uVar4 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack96,false);
              iVar3 = lib::L2CValue::as_integer(aLStack160);
              fVar7 = (float)lib::L2CValue::as_number(aLStack112);
              bVar1 = lib::L2CValue::as_bool(aLStack96);
              app::lua_bind::AttackModule__set_power_impl
                        (this->moduleAccessor,iVar3,fVar7,(bool)(bVar1 & 1));
              lib::L2CValue::_L2CValue(aLStack96);
            }
            lib::L2CValue::_L2CValue(aLStack160);
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar2);
        }
        lib::L2CValue::_L2CValue(aLStack128);
      }
      bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar4 = lib::L2CValue::operator__(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) == 0) {
LAB_710001f6b0:
        pLVar5 = aLStack128;
      }
      else {
        this_00 = &this->globalTable;
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar4 & 1) == 0) {
LAB_710001f678:
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
          lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
          uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar4 & 1) != 0) goto LAB_710001f6b0;
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
          uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar4 & 1) == 0) goto LAB_710001f758;
        }
        else {
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
          uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar4 & 1) == 0) goto LAB_710001f678;
          lib::L2CValue::_L2CValue(aLStack128);
        }
        lib::L2CValue::L2CValue(aLStack96,false);
        lib::L2CValue::L2CValue(aLStack128,0x1288bbac48);
        lib::L2CValue::L2CValue(aLStack160,0x1605c5fc49);
        FUN_710001e750(this,aLStack96,aLStack128,aLStack160);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack128);
        pLVar5 = aLStack96;
      }
      lib::L2CValue::_L2CValue(pLVar5);
LAB_710001f758:
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::_L2CValue(aLStack112);
      return;
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    }
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar5 = aLStack96;
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x70);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar4 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar4 = lib::L2CValue::operator__(aLStack160,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar4 & 1) == 0) goto LAB_710001f668;
      goto LAB_710001f354;
    }
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    pLVar5 = aLStack112;
  }
  lib::L2CValue::_L2CValue(pLVar5);
LAB_710001f668:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

