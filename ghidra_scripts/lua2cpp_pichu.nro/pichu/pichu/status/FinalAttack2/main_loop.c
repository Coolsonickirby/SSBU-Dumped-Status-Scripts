
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPichu::status::FinalAttack2_main_loop(L2CFighterPichu *this,L2CValue *return_value)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  FUN_710001b120(aLStack64,this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PIKACHU_STATUS_FINAL_WORK_INT_VORTEX_TIME_COUNT);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack80,iVar2);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PIKACHU_STATUS_FINAL_WORK_INT_REFLECT_COUNT_TOTAL);
      iVar2 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_PIKACHU_STATUS_FINAL_WORK_INT_REFLECT_COUNT_ATTACK_2);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack80,iVar2);
      lib::L2CValue::L2CValue(aLStack64,3);
      uVar4 = lib::L2CValue::operator__(aLStack64,aLStack80);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue
                  (aLStack64,_FIGHTER_PIKACHU_STATUS_FINAL_WORK_INT_REFLECT_COUNT_ATTACK_2);
        iVar2 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PIKACHU_STATUS_KIND_FINAL_ATTACK);
        lib::L2CValue::L2CValue(aLStack80,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,0);
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_PIKACHU_STATUS_FINAL_WORK_INT_REFLECT_COUNT_ATTACK_2);
        iVar2 = lib::L2CValue::as_integer(aLStack64);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PIKACHU_STATUS_KIND_FINAL_ATTACK_2);
        lib::L2CValue::L2CValue(aLStack80,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PIKACHU_STATUS_KIND_FINAL_ATTACK_FINISH);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    }
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

