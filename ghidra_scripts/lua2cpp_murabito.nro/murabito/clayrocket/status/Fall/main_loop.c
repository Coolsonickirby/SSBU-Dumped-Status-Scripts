
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMurabitoClayrocket::status::Fall_main_loop
          (L2CWeaponMurabitoClayrocket *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  Hash40 HVar7;
  float fVar8;
  float fVar9;
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
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar4 = lib::L2CValue::operator__(aLStack176,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar4 & 1) != 0) {
    FUN_710002edf0(aLStack96,this);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_710002e7d0;
    }
  }
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::operator_(aLStack112);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,8);
    bVar2 = lib::L2CValue::operator_cast_to_bool(pLVar5);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710002e7d0;
    }
  }
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLAG_DETACH);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLAG_GET_OFF);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLAG_RIDE);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLAG_DETACH);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x10d78ab4d3);
    lib::L2CValue::L2CValue(aLStack192,0xa313b6b31);
    uVar4 = lib::L2CValue::as_integer(aLStack96);
    uVar6 = lib::L2CValue::as_integer(aLStack192);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack176,fVar8);
    FUN_710002deb0(this,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack192,_WEAPON_MURABITO_CLAYROCKET_STATUS_WORK_INT_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue(aLStack224,_WEAPON_MURABITO_CLAYROCKET_STATUS_WORK_INT_END_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack224);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack208,iVar3);
  uVar4 = lib::L2CValue::operator_(aLStack208,aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack256,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLAG_BURST);
    iVar3 = lib::L2CValue::as_integer(aLStack256);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack240);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((bVar2 & 1U) == 0) {
      FUN_710002f120(aLStack192,this);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue
                (aLStack208,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLOAT_DIRECTION_X);
      iVar3 = lib::L2CValue::as_integer(aLStack208);
      fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,fVar8);
      lib::L2CValue::operator_(aLStack144,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::L2CValue
                (aLStack208,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLOAT_DIRECTION_Y);
      iVar3 = lib::L2CValue::as_integer(aLStack208);
      fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,fVar8);
      lib::L2CValue::operator_(aLStack160,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack208);
      iVar3 = app::lua_bind::GroundModule__get_touch_flag_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::operator_(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0);
      uVar4 = lib::L2CValue::operator__(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack224,aLStack128);
        lib::L2CValue::L2CValue(aLStack240,aLStack144);
        lib::L2CValue::L2CValue(aLStack256,aLStack160);
        FUN_710002f7d0(aLStack208,this,aLStack224,aLStack240,aLStack256);
        lib::L2CValue::L2CValue(aLStack96,true);
        uVar4 = lib::L2CValue::operator__(aLStack208,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack224);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
          goto LAB_710002e7d0;
        }
      }
      lib::L2CValue::L2CValue(aLStack96,aLStack144);
      lib::L2CValue::L2CValue(aLStack208,aLStack160);
      FUN_7100030620(this,aLStack96,aLStack208);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::operator_(aLStack112);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack272);
      lib::L2CValue::_L2CValue(aLStack272);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack272,0);
        FUN_710002db60(this,aLStack272);
        lib::L2CValue::_L2CValue(aLStack272);
      }
      FUN_710002e110(aLStack288,this);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack288);
      lib::L2CValue::_L2CValue(aLStack288);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack288,0xa1a64d66e);
        lib::L2CValue::L2CValue(aLStack304,0.0);
        lib::L2CValue::L2CValue(aLStack320,1.0);
        lib::L2CValue::L2CValue(aLStack336,false);
        HVar7 = lib::L2CValue::as_hash(aLStack288);
        fVar8 = (float)lib::L2CValue::as_number(aLStack304);
        fVar9 = (float)lib::L2CValue::as_number(aLStack320);
        bVar1 = lib::L2CValue::as_bool(aLStack336);
        app::lua_bind::MotionModule__change_motion_impl
                  (this->moduleAccessor,HVar7,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack288);
      }
      lib::L2CValue::L2CValue(aLStack304,aLStack112);
      FUN_7100030e30(aLStack288,this,aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710002e7d0;
    }
  }
  else {
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack192);
  }
  lib::L2CValue::L2CValue(aLStack192,_WEAPON_LINK_NO_CONSTRAINT);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar5 = aLStack192;
LAB_710002e784:
    lib::L2CValue::_L2CValue(pLVar5);
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack224,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLAG_RIDE_REFLECTED);
    iVar3 = lib::L2CValue::as_integer(aLStack224);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack208);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_LINK_NO_CONSTRAINT);
      lib::L2CValue::L2CValue(aLStack192,0x2bd53d128c);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      HVar7 = lib::L2CValue::as_hash(aLStack192);
      app::lua_bind::LinkModule__send_event_parents_impl(this->moduleAccessor,iVar3,HVar7);
      lib::L2CValue::_L2CValue(aLStack192);
      pLVar5 = aLStack96;
      goto LAB_710002e784;
    }
  }
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_MURABITO_CLAYROCKET_STATUS_KIND_BURST);
  lib::L2CValue::L2CValue(aLStack192,false);
  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x40);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,1);
LAB_710002e7d0:
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

