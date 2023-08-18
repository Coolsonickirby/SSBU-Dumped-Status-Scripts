
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::SpecialN3JumpAerial_main_loop
          (L2CFighterPickel *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  Hash40 HVar4;
  ulong uVar5;
  L2CValue *this_00;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  FUN_710004d710();
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_JUMP_AERIAL);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  HVar4 = app::lua_bind::MotionModule__motion_kind_partial_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,HVar4);
  lib::L2CValue::L2CValue(aLStack64,0x7fb997a80);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PICKEL_STATUS_SPECIAL_N3_FLAG_CONTINUAL_SPECIAL_N3);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0xaf5156bf9);
      FUN_710004dca0(aLStack96,this,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack64,true);
      uVar5 = lib::L2CValue::operator__(aLStack96,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,aLStack80);
        FUN_710004ddd0(aLStack64,this);
        lib::L2CValue::_L2CValue(aLStack128);
        lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack144);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::_L2CValue(aLStack96);
          goto LAB_710005647c;
        }
        lib::L2CValue::L2CValue(aLStack144,aLStack64);
        FUN_710004e0b0(this,aLStack144);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack64);
      }
      this_00 = aLStack96;
      goto LAB_710005626c;
    }
  }
  else {
    lib::L2CValue::_L2CValue(aLStack96);
    this_00 = aLStack112;
LAB_710005626c:
    lib::L2CValue::_L2CValue(this_00);
  }
  lib::L2CValue::L2CValue(aLStack160,aLStack80);
  FUN_710004e300(aLStack96,this,aLStack160);
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack176,aLStack80);
    FUN_7100054190(aLStack96,this,aLStack176);
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar5 & 1) == 0) {
      FUN_7100054380(aLStack64,this);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((bVar1 & 1U) == 0) {
        FUN_7100054730(aLStack96,this);
        lib::L2CValue::L2CValue(aLStack64,true);
        uVar5 = lib::L2CValue::operator__(aLStack96,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) == 0) {
          bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          if ((bVar1 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack64,0xf899192aa);
            lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting
                      (this,(L2CValue)0xc0);
            lib::L2CValue::_L2CValue(aLStack64);
            lua2cpp::L2CFighterCommon::sub_air_check_superleaf_fall_slowly(this);
            FUN_710004f270(this);
            FUN_7100055120(this);
            lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          }
          else {
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N3_FALL_AERIAL);
            lib::L2CValue::L2CValue(aLStack96,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xa0);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack64);
            lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          }
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      }
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
LAB_710005647c:
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

