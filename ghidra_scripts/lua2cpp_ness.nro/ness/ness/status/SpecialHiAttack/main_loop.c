
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterNess::status::SpecialHiAttack_main_loop(L2CFighterNess *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *this_00;
  ulong uVar4;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar1 & 1U) == 0) {
    bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_NESS_STATUS_SPECIAL_HI_FLAG_LANDING_ENABLE);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
      }
      else {
        this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator__(this_00,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
          lib::L2CValue::L2CValue(aLStack80,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
          goto LAB_71000135bc;
        }
      }
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_NESS_STATUS_SPECIAL_HI_WORK_FLOAT_DIR);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_NESS_SPECIAL_HI_ATTACK);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_NESS_SPECIAL_AIR_HI_ATTACK);
      lib::L2CValue::L2CValue(aLStack112,0xb7804953b);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_NESS_STATUS_KIND_SPECIAL_HI_END);
      lib::L2CValue::L2CValue(aLStack144,0xf188f88aa);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_NESS_STATUS_KIND_SPECIAL_HI_REFLECT);
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_NESS_STATUS_SPECIAL_HI_FLAG_REFLECT_GROUND);
      lib::L2CValue::L2CValue(aLStack192,0x10aed2b9e8);
      FUN_71000138b0(this,aLStack64,aLStack80,aLStack96,aLStack112,aLStack128,aLStack144,aLStack160,
                     aLStack176,aLStack192);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack64);
      iVar3 = 0;
      goto LAB_71000135d4;
    }
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_NESS_STATUS_KIND_SPECIAL_HI_END);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
LAB_71000135bc:
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  iVar3 = 1;
LAB_71000135d4:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

