
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::BuddySpecialNShootTurn_main_loop
          (L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *this_00;
  ulong uVar4;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_SHOOT_TURN);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) == 0) {
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
    uVar4 = lib::L2CValue::operator__(this_00,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PASS);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar2 & 1U) == 0) {
        lua2cpp::L2CFighterCommon::sub_check_button_jump(this);
        lib::L2CValue::L2CValue(aLStack64,true);
        uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) {
          lua2cpp::L2CFighterCommon::sub_check_button_frick(this);
          lib::L2CValue::L2CValue(aLStack64,true);
          uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar4 & 1) == 0) {
            bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
            lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
            bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
            lib::L2CValue::_L2CValue(aLStack64);
            if ((bVar2 & 1U) == 0) {
              bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
              lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
              lib::L2CValue::L2CValue(aLStack64,false);
              uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
              lib::L2CValue::_L2CValue(aLStack64);
              lib::L2CValue::_L2CValue(aLStack80);
              if ((uVar4 & 1) != 0) {
                FUN_71001481f0(aLStack64,this);
                bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
                lib::L2CValue::_L2CValue(aLStack64);
                if ((bVar2 & 1U) != 0) {
                  lib::L2CValue::L2CValue
                            (aLStack64,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT);
                  lib::L2CValue::L2CValue(aLStack80,true);
                  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
                  goto LAB_710014ba50;
                }
              }
              FUN_7100148080(this);
              goto LAB_710014ba60;
            }
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT);
            lib::L2CValue::L2CValue(aLStack80,true);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
          }
          else {
            lib::L2CValue::L2CValue
                      (aLStack64,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_JUMP_SQUAT);
            lib::L2CValue::L2CValue(aLStack80,true);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
          }
        }
        else {
          lib::L2CValue::L2CValue
                    (aLStack64,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_JUMP_SQUAT);
          lib::L2CValue::L2CValue(aLStack80,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_FALL);
        lib::L2CValue::L2CValue(aLStack80,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_FALL);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_RESERVED_SHOOT_TURN);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT);
    lib::L2CValue::L2CValue(aLStack80,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
  }
LAB_710014ba50:
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
LAB_710014ba60:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

