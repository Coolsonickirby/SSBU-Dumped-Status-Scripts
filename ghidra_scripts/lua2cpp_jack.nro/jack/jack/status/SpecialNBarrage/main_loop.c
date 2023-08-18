
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterJack::status::SpecialNBarrage_main_loop(L2CFighterJack *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  L2CValue *this_00;
  ulong uVar9;
  Hash40 HVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [24];
  
  FUN_71000212d0(aLStack168,this);
  lib::L2CValue::L2CValue(aLStack152,true);
  uVar8 = lib::L2CValue::operator__(aLStack168,aLStack152);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack168);
  if ((uVar8 & 1) != 0) goto LAB_710002218c;
  FUN_71000224a0(this);
  lib::L2CValue::L2CValue(aLStack184,CONTROL_PAD_BUTTON_SPECIAL);
  iVar6 = lib::L2CValue::as_integer(aLStack184);
  bVar1 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar6);
  lib::L2CValue::L2CValue(aLStack168,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack152,false);
  uVar8 = lib::L2CValue::operator__(aLStack168,aLStack152);
  lib::L2CValue::_L2CValue(aLStack152);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack168);
    this_00 = aLStack184;
LAB_71000219ec:
    lib::L2CValue::_L2CValue(this_00);
  }
  else {
    lib::L2CValue::L2CValue(aLStack216,_CONTROL_PAD_BUTTON_SPECIAL_RAW);
    iVar6 = lib::L2CValue::as_integer(aLStack216);
    bVar1 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar6);
    lib::L2CValue::L2CValue(aLStack200,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack152,false);
    uVar8 = lib::L2CValue::operator__(aLStack200,aLStack152);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack184);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack152,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_BARRAGE_CHECK_RAPID);
      iVar6 = lib::L2CValue::as_integer(aLStack152);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar6);
      this_00 = aLStack152;
      goto LAB_71000219ec;
    }
  }
  bVar1 = app::lua_bind::MotionModule__is_looped_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack168,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack152,true);
  uVar8 = lib::L2CValue::operator__(aLStack168,aLStack152);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack168);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack168);
    lib::L2CValue::L2CValue(aLStack200,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_BARRAGE_LW);
    iVar6 = lib::L2CValue::as_integer(aLStack200);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar6);
    lib::L2CValue::L2CValue(aLStack184,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack152,true);
    uVar8 = lib::L2CValue::operator__(aLStack184,aLStack152);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack200);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack184,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack200,0x13ac816ddb);
      uVar8 = lib::L2CValue::as_integer(aLStack184);
      uVar9 = lib::L2CValue::as_integer(aLStack200);
      iVar6 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar8,uVar9);
      lib::L2CValue::L2CValue(aLStack152,iVar6);
      lib::L2CValue::operator_(aLStack168,aLStack152);
    }
    else {
      lib::L2CValue::L2CValue(aLStack184,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack200,0x1654b80c8a);
      uVar8 = lib::L2CValue::as_integer(aLStack184);
      uVar9 = lib::L2CValue::as_integer(aLStack200);
      iVar6 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar8,uVar9);
      lib::L2CValue::L2CValue(aLStack152,iVar6);
      lib::L2CValue::operator_(aLStack168,aLStack152);
    }
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::L2CValue(aLStack200,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_BARRAGE_LOOP);
    iVar6 = lib::L2CValue::as_integer(aLStack200);
    iVar6 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar6);
    lib::L2CValue::L2CValue(aLStack184,iVar6);
    lib::L2CValue::L2CValue(aLStack232,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack248,0x147f733df0);
    uVar8 = lib::L2CValue::as_integer(aLStack232);
    uVar9 = lib::L2CValue::as_integer(aLStack248);
    iVar6 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar8,uVar9);
    lib::L2CValue::L2CValue(aLStack216,iVar6);
    uVar8 = lib::L2CValue::operator__(aLStack216,aLStack184);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack280,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_BARRAGE_CHECK_RAPID);
      iVar6 = lib::L2CValue::as_integer(aLStack280);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar6);
      lib::L2CValue::L2CValue(aLStack264,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack152,true);
      uVar8 = lib::L2CValue::operator__(aLStack264,aLStack152);
      lib::L2CValue::_L2CValue(aLStack152);
      if ((uVar8 & 1) == 0) {
        uVar8 = 0;
      }
      else {
        lib::L2CValue::L2CValue(aLStack296,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_BUTTON_RAPID_COUNT);
        iVar6 = lib::L2CValue::as_integer(aLStack296);
        iVar6 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar6);
        lib::L2CValue::L2CValue(aLStack152,iVar6);
        uVar8 = lib::L2CValue::operator_(aLStack152,aLStack168);
        uVar8 = uVar8 & 0xffffffff;
        lib::L2CValue::_L2CValue(aLStack152);
        lib::L2CValue::_L2CValue(aLStack296);
      }
      lib::L2CValue::_L2CValue(aLStack264);
      lib::L2CValue::_L2CValue(aLStack280);
    }
    else {
      uVar8 = 1;
    }
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack200);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack152,_FIGHTER_JACK_STATUS_KIND_SPECIAL_N_BARRAGE_END);
      lib::L2CValue::L2CValue(aLStack184,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x68,(L2CValue)0x48);
      lib::L2CValue::_L2CValue(aLStack184);
      lib::L2CValue::_L2CValue(aLStack152);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::_L2CValue(aLStack168);
      return;
    }
    lib::L2CValue::L2CValue(aLStack152,0);
    lib::L2CValue::L2CValue(aLStack184,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_BUTTON_RAPID_COUNT);
    iVar6 = lib::L2CValue::as_integer(aLStack152);
    iVar7 = lib::L2CValue::as_integer(aLStack184);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar6,iVar7);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::L2CValue(aLStack152,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_BARRAGE_LOOP);
    iVar6 = lib::L2CValue::as_integer(aLStack152);
    app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar6);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack168);
  }
  lib::L2CValue::L2CValue(aLStack184,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_BARRAGE_LW);
  iVar6 = lib::L2CValue::as_integer(aLStack184);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar6);
  lib::L2CValue::L2CValue(aLStack168,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack152,false);
  uVar8 = lib::L2CValue::operator__(aLStack168,aLStack152);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack184);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack184,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_BARRAGE_SHOOT_INTERVAL);
    iVar6 = lib::L2CValue::as_integer(aLStack184);
    iVar6 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar6);
    lib::L2CValue::L2CValue(aLStack168,iVar6);
    lib::L2CValue::L2CValue(aLStack152,0);
    uVar8 = lib::L2CValue::operator__(aLStack168,aLStack152);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack184);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack152,_FIGHTER_JACK_MOTION_PART_SET_KIND_SPECIAL_N_SHOOT);
      lib::L2CValue::L2CValue(aLStack168,0x1be8d07682);
      lib::L2CValue::L2CValue(aLStack184,0.0);
      lib::L2CValue::L2CValue(aLStack200,1.0);
      lib::L2CValue::L2CValue(aLStack216,false);
      lib::L2CValue::L2CValue(aLStack232,false);
      lib::L2CValue::L2CValue(aLStack248,0.0);
      lib::L2CValue::L2CValue(aLStack264,true);
      lib::L2CValue::L2CValue(aLStack280,false);
      lib::L2CValue::L2CValue(aLStack296,false);
      iVar6 = lib::L2CValue::as_integer(aLStack152);
      HVar10 = lib::L2CValue::as_hash(aLStack168);
      fVar11 = (float)lib::L2CValue::as_number(aLStack184);
      fVar12 = (float)lib::L2CValue::as_number(aLStack200);
      bVar1 = lib::L2CValue::as_bool(aLStack216);
      bVar2 = lib::L2CValue::as_bool(aLStack232);
      fVar13 = (float)lib::L2CValue::as_number(aLStack248);
      bVar3 = lib::L2CValue::as_bool(aLStack264);
      bVar4 = lib::L2CValue::as_bool(aLStack280);
      bVar5 = lib::L2CValue::as_bool(aLStack296);
      app::lua_bind::MotionModule__add_motion_partial_impl
                (this->moduleAccessor,iVar6,HVar10,fVar11,fVar12,(bool)(bVar1 & 1),(bool)(bVar2 & 1)
                 ,fVar13,(bool)(bVar3 & 1),(bool)(bVar4 & 1),(bool)(bVar5 & 1));
      lib::L2CValue::_L2CValue(aLStack296);
      lib::L2CValue::_L2CValue(aLStack280);
      lib::L2CValue::_L2CValue(aLStack264);
      lib::L2CValue::_L2CValue(aLStack248);
      lib::L2CValue::_L2CValue(aLStack232);
      lib::L2CValue::_L2CValue(aLStack216);
      lib::L2CValue::_L2CValue(aLStack200);
      lib::L2CValue::_L2CValue(aLStack184);
      lib::L2CValue::_L2CValue(aLStack168);
      lib::L2CValue::_L2CValue(aLStack152);
      lib::L2CValue::L2CValue(aLStack168);
      lib::L2CValue::L2CValue(aLStack200,_FIGHTER_INSTANCE_WORK_ID_INT_CUSTOMIZE_SPECIAL_N_NO);
      iVar6 = lib::L2CValue::as_integer(aLStack200);
      iVar6 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar6);
      lib::L2CValue::L2CValue(aLStack184,iVar6);
      lib::L2CValue::L2CValue(aLStack152,0);
      uVar8 = lib::L2CValue::operator__(aLStack184,aLStack152);
      lib::L2CValue::_L2CValue(aLStack152);
      lib::L2CValue::_L2CValue(aLStack184);
      lib::L2CValue::_L2CValue(aLStack200);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack152,0x17cc8fd651);
        lib::L2CValue::operator_(aLStack168,aLStack152);
      }
      else {
        lib::L2CValue::L2CValue(aLStack152,0x168ccbb4a0);
        lib::L2CValue::operator_(aLStack168,aLStack152);
      }
      lib::L2CValue::_L2CValue(aLStack152);
      lib::L2CValue::L2CValue(aLStack184,0xf899192aa);
      uVar8 = lib::L2CValue::as_integer(aLStack184);
      uVar9 = lib::L2CValue::as_integer(aLStack168);
      iVar6 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar8,uVar9);
      lib::L2CValue::L2CValue(aLStack152,iVar6);
      lib::L2CValue::L2CValue(aLStack200,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_BARRAGE_SHOOT_INTERVAL);
      iVar6 = lib::L2CValue::as_integer(aLStack152);
      iVar7 = lib::L2CValue::as_integer(aLStack200);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar6,iVar7);
      lib::L2CValue::_L2CValue(aLStack200);
      lib::L2CValue::_L2CValue(aLStack152);
      lib::L2CValue::_L2CValue(aLStack184);
      lib::L2CValue::_L2CValue(aLStack168);
    }
  }
LAB_710002218c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

