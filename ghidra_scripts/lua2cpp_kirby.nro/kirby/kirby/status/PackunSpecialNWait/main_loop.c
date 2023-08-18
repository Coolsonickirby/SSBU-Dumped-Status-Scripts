
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PackunSpecialNWait_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  GroundCorrectKind GVar2;
  int iVar3;
  L2CValue *pLVar4;
  Fighter *pFVar5;
  ulong uVar6;
  Hash40 HVar7;
  float fVar8;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
  pFVar5 = (Fighter *)lib::L2CValue::as_pointer(pLVar4);
  bVar1 = app::FighterSpecializer_Packun::is_special_n_spikeball_changed_status(pFVar5);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar6 = lib::L2CValue::operator__(pLVar4,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,fVar8);
      lib::L2CValue::L2CValue(aLStack80,1.0);
      uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
LAB_710015fdfc:
        lib::L2CValue::L2CValue(aLStack80,-1.0);
        uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) goto LAB_710015fe90;
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
        lib::L2CValue::L2CValue(aLStack80,0.0);
        uVar6 = lib::L2CValue::operator_(pLVar4,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) goto LAB_710015fe90;
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PACKUN_STATUS_SPECIAL_N_FLAG_SHOOT_FRONT);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      }
      else {
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
        lib::L2CValue::L2CValue(aLStack80,0.0);
        uVar6 = lib::L2CValue::operator_(aLStack80,pLVar4);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) goto LAB_710015fdfc;
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PACKUN_STATUS_SPECIAL_N_FLAG_SHOOT_FRONT);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      }
      lib::L2CValue::_L2CValue(aLStack80);
LAB_710015fe90:
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_PACKUN_SPECIAL_N_SHOOT);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::_L2CValue(aLStack96);
      return;
    }
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar4,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar4,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) goto LAB_710015fc04;
      lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
      GVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar2);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0xe64a284c2);
      HVar7 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                (this->moduleAccessor,HVar7,-1.0,1.0,0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar4,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) goto LAB_710015fc04;
      lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
      GVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar2);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_AIR_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      FUN_710015e370(this);
      lib::L2CValue::L2CValue(aLStack80,0x1226f0710d);
      HVar7 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                (this->moduleAccessor,HVar7,-1.0,1.0,0.0,false,false);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_PACKUN_SPECIAL_N_HIT_END);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::_L2CValue(aLStack80);
LAB_710015fc04:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

