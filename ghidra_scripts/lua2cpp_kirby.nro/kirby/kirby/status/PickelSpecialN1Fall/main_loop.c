
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PickelSpecialN1Fall_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::sub_fall(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar1 & 1U) == 0) {
    FUN_710012e5a0(this);
    FUN_7100131dd0(this);
    FUN_7100132080(this);
    FUN_7100136480(aLStack64,this);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL);
      FUN_7100132590(aLStack80,this,aLStack96);
      lib::L2CValue::L2CValue(aLStack64,true);
      uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) == 0) {
        FUN_7100136640(aLStack80,this);
        lib::L2CValue::L2CValue(aLStack64,true);
        uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INSTANCE_WORK_ID_FLAG_METAMON_EXHAUST);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
          lib::L2CValue::L2CValue(aLStack64,true);
          uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack64,0xf899192aa);
            lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting
                      (this,(L2CValue)0xc0);
            lib::L2CValue::_L2CValue(aLStack64);
            lua2cpp::L2CFighterCommon::sub_air_check_superleaf_fall_slowly(this);
            FUN_71001332e0(this);
          }
          else {
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_METAMON_OUT);
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

