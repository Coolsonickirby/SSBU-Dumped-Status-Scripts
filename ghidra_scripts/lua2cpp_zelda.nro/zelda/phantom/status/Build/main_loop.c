
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponZeldaPhantom::status::Build_main_loop(L2CWeaponZeldaPhantom *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  Hash40 HVar6;
  L2CValue *this_00;
  float fVar7;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_ZELDA_PHANTOM_INSTANCE_WORK_ID_FLAG_CANCEL);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((bVar2 & 1U) == 0) {
    while( true ) {
      lib::L2CValue::L2CValue(aLStack160,_WEAPON_ZELDA_PHANTOM_INSTANCE_WORK_ID_INT_BUILD_NEXT);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack144,iVar3);
      lib::L2CValue::L2CValue(aLStack128,0);
      uVar4 = lib::L2CValue::operator_(aLStack128,aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar4 & 1) == 0) break;
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_ZELDA_PHANTOM_INSTANCE_WORK_ID_INT_BUILD_STEP);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_ZELDA_PHANTOM_INSTANCE_WORK_ID_INT_BUILD_STEP);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack144,iVar3);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_ZELDA_PHANTOM_BUILD_STEP_TERM);
      uVar4 = lib::L2CValue::operator__(aLStack144,aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack128,_LINK_NO_ARTICLE);
        lib::L2CValue::L2CValue(aLStack160,0x1dc16591ed);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        HVar6 = lib::L2CValue::as_hash(aLStack160);
        app::lua_bind::LinkModule__send_event_parents_impl(this->moduleAccessor,iVar3,HVar6);
        lib::L2CValue::_L2CValue(aLStack160);
        this_00 = aLStack128;
      }
      else {
        lib::L2CValue::L2CValue(aLStack176,aLStack144);
        FUN_710001a3d0(this,aLStack176);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::L2CValue(aLStack128,_WEAPON_ZELDA_PHANTOM_BUILD_STEP_01_A);
        uVar4 = lib::L2CValue::operator__(aLStack144,aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack128,_WEAPON_ZELDA_PHANTOM_BUILD_STEP_03_A);
          uVar4 = lib::L2CValue::operator__(aLStack144,aLStack128);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar4 & 1) != 0) goto LAB_710001a0b0;
          lib::L2CValue::L2CValue(aLStack128,_WEAPON_ZELDA_PHANTOM_BUILD_STEP_04_A);
          uVar4 = lib::L2CValue::operator__(aLStack144,aLStack128);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar4 & 1) != 0) goto LAB_710001a0b0;
          lib::L2CValue::L2CValue(aLStack128,_WEAPON_ZELDA_PHANTOM_BUILD_STEP_06_A);
          bVar1 = lib::L2CValue::operator__(aLStack144,aLStack128);
          bVar1 = bVar1 ^ 1;
          lib::L2CValue::_L2CValue(aLStack128);
        }
        else {
LAB_710001a0b0:
          bVar1 = 0;
        }
        lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack128,1.0);
          lib::L2CValue::L2CValue
                    (aLStack192,_WEAPON_ZELDA_PHANTOM_INSTANCE_WORK_ID_FLOAT_CHARGE_LEVEL);
          fVar7 = (float)lib::L2CValue::as_number(aLStack128);
          iVar3 = lib::L2CValue::as_integer(aLStack192);
          app::lua_bind::WorkModule__add_float_impl(this->moduleAccessor,fVar7,iVar3);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::L2CValue(aLStack192,0xd4acc3054);
          lib::L2CValue::L2CValue(aLStack208,0xdceb76ac9);
          uVar4 = lib::L2CValue::as_integer(aLStack192);
          uVar5 = lib::L2CValue::as_integer(aLStack208);
          fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar4,uVar5);
          lib::L2CValue::L2CValue(aLStack128,fVar7);
          lib::L2CValue::L2CValue(aLStack224,_WEAPON_ZELDA_PHANTOM_INSTANCE_WORK_ID_FLOAT_HP);
          fVar7 = (float)lib::L2CValue::as_number(aLStack128);
          iVar3 = lib::L2CValue::as_integer(aLStack224);
          app::lua_bind::WorkModule__add_float_impl(this->moduleAccessor,fVar7,iVar3);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack192);
        }
        this_00 = aLStack160;
      }
      lib::L2CValue::_L2CValue(this_00);
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_ZELDA_PHANTOM_INSTANCE_WORK_ID_INT_BUILD_NEXT);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_ZELDA_PHANTOM_STATUS_KIND_CANCEL);
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

