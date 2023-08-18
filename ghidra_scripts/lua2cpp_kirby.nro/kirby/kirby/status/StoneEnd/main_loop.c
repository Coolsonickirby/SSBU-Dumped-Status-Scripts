
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::StoneEnd_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack80);
LAB_7100229bdc:
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((bVar2 & 1U) == 0) {
      FUN_7100229ec0(aLStack80,this);
      lib::L2CValue::operator_(aLStack80);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar2 & 1U) != 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
          lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xc0);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
          GVar4 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_MOTION_AIR);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND)
          ;
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
          pLVar6 = aLStack80;
        }
        else {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR);
          iVar3 = lib::L2CValue::as_integer(aLStack64);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
          pLVar6 = aLStack64;
        }
        lib::L2CValue::_L2CValue(pLVar6);
        FUN_7100229610(this);
      }
      FUN_710022a090(aLStack80,this);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar2 & 1U) != 0) {
        FUN_71001a6740(this);
      }
      iVar3 = 0;
      goto LAB_7100229de8;
    }
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar6 = aLStack64;
LAB_7100229d00:
    lib::L2CValue::_L2CValue(pLVar6);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x90);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      pLVar6 = aLStack80;
      goto LAB_7100229d00;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) goto LAB_7100229bdc;
  }
  iVar3 = 1;
LAB_7100229de8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

