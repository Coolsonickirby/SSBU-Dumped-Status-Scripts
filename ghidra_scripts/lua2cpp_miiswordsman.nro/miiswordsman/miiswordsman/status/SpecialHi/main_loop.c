
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMiiswordsman::status::SpecialHi_main_loop
          (L2CFighterMiiswordsman *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  L2CValue *this_00;
  ulong uVar5;
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
      FUN_7100021060(aLStack80,this);
      lib::L2CValue::operator_(aLStack80);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar1 & 1U) != 0) {
        FUN_71000208c0(this);
        this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(this_00,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_AIR);
          GVar3 = lib::L2CValue::as_integer(aLStack64);
          app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
          lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xc0);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::L2CValue
                    (aLStack80,_FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND);
          iVar4 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
        }
        else {
          lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_GROUND);
          GVar3 = lib::L2CValue::as_integer(aLStack64);
          app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
          lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xc0);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::L2CValue
                    (aLStack80,_FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR);
          iVar4 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
        }
        lib::L2CValue::_L2CValue(aLStack80);
      }
      FUN_71000212b0(aLStack80,this);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar1 & 1U) != 0) {
        FUN_71000207c0(this);
      }
      iVar4 = 0;
      goto LAB_7100020fe0;
    }
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_HI1_JUMP);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  iVar4 = 1;
LAB_7100020fe0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar4);
  return;
}

