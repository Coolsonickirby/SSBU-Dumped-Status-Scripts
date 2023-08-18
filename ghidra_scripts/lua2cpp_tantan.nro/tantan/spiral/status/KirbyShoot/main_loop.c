
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponTantanSpiral::status::KirbyShoot_main_loop
          (L2CWeaponTantanSpiral *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  Weapon *pWVar6;
  ulong uVar7;
  ulong uVar8;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
  pWVar6 = (Weapon *)lib::L2CValue::as_pointer(pLVar5);
  bVar1 = app::WeaponSpecializer_TantanSpiralleft::is_check_ground_kirby_simple(pWVar6);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_LINK_NO_CONSTRAINT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
LAB_71000936ac:
      bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar2 & 1U) == 0) goto LAB_71000938bc;
      lib::L2CValue::L2CValue
                (aLStack112,_WEAPON_TANTAN_SPIRALLEFT_STATUS_SHOOT_INT_KIRBY_END_MOTION_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) != 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
        lib::L2CValue::L2CValue
                  (aLStack80,_WEAPON_TANTAN_SPIRALLEFT_STATUS_SHOOT_INT_KIRBY_END_MOTION_FRAME);
        iVar3 = lib::L2CValue::as_integer(pLVar5);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
        lib::L2CValue::_L2CValue(aLStack80);
      }
      lib::L2CValue::L2CValue(aLStack96,0xcb4cf0e97);
      lib::L2CValue::L2CValue(aLStack112,0x178ffede39);
      uVar7 = lib::L2CValue::as_integer(aLStack96);
      uVar8 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar7,uVar8);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue
                (aLStack128,_WEAPON_TANTAN_SPIRALLEFT_STATUS_SHOOT_INT_KIRBY_END_MOTION_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::operator_(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
      uVar7 = lib::L2CValue::operator__(aLStack96,pLVar5);
      if ((uVar7 & 1) == 0) goto LAB_71000931f8;
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_TANTAN_SPIRALLEFT_STATUS_KIND_KIRBY_BACK);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar5 = aLStack80;
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_LINK_NO_CONSTRAINT);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::LinkModule__is_parent_hit_stop_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) == 0) goto LAB_71000936ac;
      lib::L2CValue::L2CValue(aLStack80,0xcb4cf0e97);
      lib::L2CValue::L2CValue(aLStack112,0x1c2415b31c);
      uVar7 = lib::L2CValue::as_integer(aLStack80);
      uVar8 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar7,uVar8);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack112,false);
      lib::L2CValue::L2CValue
                (aLStack144,_WEAPON_TANTAN_SPIRALLEFT_STATUS_SHOOT_INT_KIRBY_HIT_STATUS);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack128,iVar3);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_SPIRALLEFT_STATUS_KIRBY_HIT);
      uVar7 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar7 & 1) == 0) {
        bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack80,true);
          lib::L2CValue::operator_(aLStack112,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue
                    (aLStack144,_WEAPON_TANTAN_SPIRALLEFT_STATUS_SHOOT_INT_KIRBY_HIT_STATUS);
          iVar3 = lib::L2CValue::as_integer(aLStack144);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack128,iVar3);
          lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_SPIRALLEFT_STATUS_KIRBY_NO_HIT);
          uVar7 = lib::L2CValue::operator__(aLStack128,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack144);
          if ((uVar7 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack80,false);
            lib::L2CValue::operator_(aLStack112,aLStack80);
            goto LAB_71000933bc;
          }
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,true);
        lib::L2CValue::operator_(aLStack112,aLStack80);
LAB_71000933bc:
        lib::L2CValue::_L2CValue(aLStack80);
      }
      lib::L2CValue::L2CValue
                (aLStack128,_WEAPON_TANTAN_SPIRALLEFT_STATUS_SHOOT_INT_BEAM_START_COUNTER);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack128);
LAB_7100093558:
        lib::L2CValue::L2CValue
                  (aLStack144,_WEAPON_TANTAN_SPIRALLEFT_STATUS_SHOOT_INT_KIRBY_HIT_STATUS);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack128,iVar3);
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_SPIRALLEFT_STATUS_KIRBY_HIT);
        uVar7 = lib::L2CValue::operator__(aLStack128,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue
                    (aLStack176,_WEAPON_TANTAN_SPIRALLEFT_STATUS_SHOOT_INT_KIRBY_HIT_STATUS);
          iVar3 = lib::L2CValue::as_integer(aLStack176);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack160,iVar3);
          lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_SPIRALLEFT_STATUS_KIRBY_NO_HIT);
          uVar7 = lib::L2CValue::operator__(aLStack160,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack144);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack96);
            goto LAB_71000936ac;
          }
        }
        else {
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack144);
        }
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_SPIRALLEFT_STATUS_KIND_KIRBY_BACK);
        lib::L2CValue::L2CValue(aLStack128,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x80);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      }
      else {
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar2 & 1U) == 0) goto LAB_7100093558;
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_SPIRALLEFT_STATUS_KIND_KIRBY_BEAM);
        lib::L2CValue::L2CValue(aLStack128,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x80);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      }
      lib::L2CValue::_L2CValue(aLStack112);
      pLVar5 = aLStack96;
    }
    lib::L2CValue::_L2CValue(pLVar5);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_SPIRALLEFT_STATUS_KIND_KIRBY_BACK);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
LAB_71000931f8:
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
LAB_71000938bc:
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  return;
}

