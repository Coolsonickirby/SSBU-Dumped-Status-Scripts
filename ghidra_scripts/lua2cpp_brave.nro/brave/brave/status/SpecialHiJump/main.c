
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialHiJump_main(L2CFighterBrave *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue *this_00;
  float fVar5;
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
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_HI_WORK_INT_HOLD_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack128,0xc535b9ad8);
  uVar3 = lib::L2CValue::as_integer(aLStack80);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack144,0xc245caa4e);
  uVar3 = lib::L2CValue::as_integer(aLStack80);
  uVar4 = lib::L2CValue::as_integer(aLStack144);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack128,iVar2);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  uVar3 = lib::L2CValue::operator_(aLStack96,aLStack112);
  if ((uVar3 & 1) == 0) {
    uVar3 = lib::L2CValue::operator_(aLStack96,aLStack128);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack160,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack176,0xe35b6ff68);
      uVar3 = lib::L2CValue::as_integer(aLStack160);
      uVar4 = lib::L2CValue::as_integer(aLStack176);
      fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack80,fVar5);
      lib::L2CValue::operator_(aLStack144,aLStack80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack176,0xe42b1cffe);
      uVar3 = lib::L2CValue::as_integer(aLStack160);
      uVar4 = lib::L2CValue::as_integer(aLStack176);
      fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack80,fVar5);
      lib::L2CValue::operator_(aLStack144,aLStack80);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack176,0xedbb89e44);
    uVar3 = lib::L2CValue::as_integer(aLStack160);
    uVar4 = lib::L2CValue::as_integer(aLStack176);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar5);
    lib::L2CValue::operator_(aLStack144,aLStack80);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,aLStack144);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_BRAVE_STATUS_SPECIAL_HI_FLAG_SUCCESS_SP);
  FUN_7100016db0(this,aLStack160,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack192,0x10ab82763d);
  lib::L2CValue::L2CValue(aLStack208,0x142a37f97d);
  lib::L2CValue::L2CValue(aLStack224,false);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_BRAVE_STATUS_SPECIAL_HI_FLAG_SUCCESS_SP);
  iVar2 = lib::L2CValue::as_integer(aLStack256);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar3 = lib::L2CValue::operator__(aLStack240,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack256);
  if ((uVar3 & 1) == 0) {
    uVar3 = lib::L2CValue::operator_(aLStack96,aLStack112);
    if ((uVar3 & 1) == 0) {
      uVar3 = lib::L2CValue::operator_(aLStack96,aLStack128);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0xbed9f1824);
        lib::L2CValue::operator_(aLStack192,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0xf1a0d1d13);
        lib::L2CValue::operator_(aLStack208,aLStack80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0xb9a9828b2);
        lib::L2CValue::operator_(aLStack192,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0xf6d0a2d85);
        lib::L2CValue::operator_(aLStack208,aLStack80);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0xb03917908);
      lib::L2CValue::operator_(aLStack192,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0xff4037c3f);
      lib::L2CValue::operator_(aLStack208,aLStack80);
    }
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack256,aLStack192);
  lib::L2CValue::L2CValue(aLStack272,aLStack208);
  lib::L2CValue::L2CValue(aLStack288,aLStack224);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0x0,(L2CValue)0xf0,(L2CValue)0xe0);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar3 = lib::L2CValue::operator__(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    FUN_7100016f80(this);
  }
  lib::L2CValue::L2CValue(aLStack80,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack208,0x130898f8a9);
  uVar3 = lib::L2CValue::as_integer(aLStack80);
  uVar4 = lib::L2CValue::as_integer(aLStack208);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack192,iVar2);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_BRAVE_STATUS_SPECIAL_HI_FLAG_SUCCESS_SP);
  iVar2 = lib::L2CValue::as_integer(aLStack224);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar3 = lib::L2CValue::operator__(aLStack208,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack224);
  if ((uVar3 & 1) == 0) {
    uVar3 = lib::L2CValue::operator_(aLStack96,aLStack112);
    if ((uVar3 & 1) == 0) {
      uVar3 = lib::L2CValue::operator_(aLStack96,aLStack128);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack208,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack224,0xfba91504a);
        uVar3 = lib::L2CValue::as_integer(aLStack208);
        uVar4 = lib::L2CValue::as_integer(aLStack224);
        iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
        lib::L2CValue::L2CValue(aLStack80,iVar2);
        lib::L2CValue::operator_(aLStack192,aLStack80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack208,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack224,0xfcd9660dc);
        uVar3 = lib::L2CValue::as_integer(aLStack208);
        uVar4 = lib::L2CValue::as_integer(aLStack224);
        iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
        lib::L2CValue::L2CValue(aLStack80,iVar2);
        lib::L2CValue::operator_(aLStack192,aLStack80);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack208,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack224,0xf37995dbf);
      uVar3 = lib::L2CValue::as_integer(aLStack208);
      uVar4 = lib::L2CValue::as_integer(aLStack224);
      iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack80,iVar2);
      lib::L2CValue::operator_(aLStack192,aLStack80);
    }
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
  }
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator_(aLStack192,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
  fVar5 = (float)lib::L2CValue::as_number(aLStack208);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack80,SpecialHiJump_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

