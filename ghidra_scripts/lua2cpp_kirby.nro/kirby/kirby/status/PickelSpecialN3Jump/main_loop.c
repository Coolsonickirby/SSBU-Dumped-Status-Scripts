
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PickelSpecialN3Jump_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  Hash40 HVar4;
  ulong uVar5;
  L2CValue *this_00;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  FUN_7100121720();
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  HVar4 = app::lua_bind::MotionModule__motion_kind_partial_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,HVar4);
  lib::L2CValue::L2CValue(aLStack64,0x7fb997a80);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_STATUS_SPECIAL_N3_FLAG_CONTINUAL_SPECIAL_N3);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) goto LAB_710012b024;
    lib::L2CValue::L2CValue(aLStack96,0xaf5156bf9);
    FUN_7100121cb0(aLStack80,this,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_JUMP);
      FUN_7100121de0(aLStack64,this);
      lib::L2CValue::_L2CValue(aLStack112);
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack80);
        return;
      }
      lib::L2CValue::L2CValue(aLStack128,aLStack64);
      FUN_71001220c0(this,aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack64);
    }
    this_00 = aLStack80;
  }
  else {
    lib::L2CValue::_L2CValue(aLStack80);
    this_00 = aLStack96;
  }
  lib::L2CValue::_L2CValue(this_00);
LAB_710012b024:
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_KIND_JUMP);
  FUN_7100122310(aLStack80,this,aLStack144);
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_STATUS_KIND_JUMP);
    FUN_7100128210(aLStack80,this,aLStack160);
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar5 & 1) == 0) {
      FUN_7100128400(aLStack64,this);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((bVar1 & 1U) == 0) {
        FUN_71001287b0(aLStack80,this);
        lib::L2CValue::L2CValue(aLStack64,true);
        uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
          bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          if ((bVar1 & 1U) == 0) {
            lua2cpp::L2CFighterCommon::sub_air_check_superleaf_fall_slowly(this);
            FUN_71001232d0(this);
            FUN_7100129900(this);
          }
          else {
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N3_FALL);
            lib::L2CValue::L2CValue(aLStack80,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack64);
          }
        }
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

