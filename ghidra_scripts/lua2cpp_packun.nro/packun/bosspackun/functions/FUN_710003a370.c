
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710003a370(L2CWeaponPackunBosspackun *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *this_00;
  float fVar6;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  fVar6 = (float)app::lua_bind::ControlModule__get_stick_y_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,fVar6);
  lib::L2CValue::L2CValue(aLStack80,0x10de737e71);
  lib::L2CValue::L2CValue(aLStack128,0x19bf9f3b12);
  uVar4 = lib::L2CValue::as_integer(aLStack80);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack112,fVar6);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack128,_CONTROL_PAD_BUTTON_JUMP);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((bVar2 & 1U) == 0) {
    uVar4 = lib::L2CValue::operator<=(aLStack112,aLStack96);
    if ((uVar4 & 1) != 0) {
      bVar1 = app::lua_bind::ControlModule__is_enable_flick_jump_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack80,_WEAPON_PACKUN_BOSSPACKUN_STATUS_WORK_FLAG_HOP_LANDING_HOP_SPEED_Y_ADD)
        ;
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        goto LAB_710003a47c;
      }
    }
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack80,_WEAPON_PACKUN_BOSSPACKUN_STATUS_WORK_FLAG_HOP_LANDING_HOP_SPEED_Y_ADD);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
LAB_710003a47c:
    lib::L2CValue::~L2CValue(aLStack80);
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              (aLStack128,_WEAPON_PACKUN_BOSSPACKUN_STATUS_WORK_FLAG_HOP_LANDING_HOP_SPEED_Y_ADD);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_PACKUN_BOSSPACKUN_STATUS_KIND_HOP);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_PACKUN_BOSSPACKUN_STATUS_KIND_LANDING);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x80);
    }
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_710003a988;
  }
  fVar6 = (float)app::lua_bind::ControlModule__get_stick_x_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,fVar6);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  uVar4 = lib::L2CValue::operator<(aLStack128,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    bVar2 = false;
LAB_710003a66c:
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar4 = lib::L2CValue::operator<(aLStack80,aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      if (bVar2) {
        lib::L2CValue::~L2CValue(aLStack144);
      }
    }
    else {
      fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack160,fVar6);
      lib::L2CValue::L2CValue(aLStack80,-1.0);
      uVar4 = lib::L2CValue::operator==(aLStack160,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack160);
      if (bVar2) {
        lib::L2CValue::~L2CValue(aLStack144);
      }
      if ((uVar4 & 1) != 0) goto LAB_710003a6e0;
    }
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar4 = lib::L2CValue::operator<(aLStack80,aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      bVar2 = false;
LAB_710003a78c:
      lib::L2CValue::L2CValue(aLStack80,0.0);
      uVar4 = lib::L2CValue::operator<(aLStack128,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        if (bVar2) {
          this_00 = aLStack160;
          goto LAB_710003a878;
        }
      }
      else {
        fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack176,fVar6);
        lib::L2CValue::L2CValue(aLStack80,-1.0);
        uVar4 = lib::L2CValue::operator==(aLStack176,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack176);
        if (bVar2) {
          lib::L2CValue::~L2CValue(aLStack160);
        }
        if ((uVar4 & 1) != 0) goto LAB_710003a800;
      }
    }
    else {
      fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack160,fVar6);
      lib::L2CValue::L2CValue(aLStack80,1.0);
      uVar4 = lib::L2CValue::operator==(aLStack160,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        bVar2 = true;
        goto LAB_710003a78c;
      }
      lib::L2CValue::~L2CValue(aLStack160);
LAB_710003a800:
      lib::L2CValue::L2CValue
                (aLStack176,_WEAPON_PACKUN_BOSSPACKUN_STATUS_WORK_FLAG_HOP_LANDING_TURN);
      iVar3 = lib::L2CValue::as_integer(aLStack176);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack176);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack80,_WEAPON_PACKUN_BOSSPACKUN_STATUS_WORK_FLAG_HOP_LANDING_TURN);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
        goto LAB_710003a874;
      }
    }
  }
  else {
    fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack144,fVar6);
    lib::L2CValue::L2CValue(aLStack80,1.0);
    uVar4 = lib::L2CValue::operator==(aLStack144,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      bVar2 = true;
      goto LAB_710003a66c;
    }
    lib::L2CValue::~L2CValue(aLStack144);
LAB_710003a6e0:
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_PACKUN_BOSSPACKUN_STATUS_WORK_FLAG_HOP_LANDING_TURN);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
LAB_710003a874:
    this_00 = aLStack80;
LAB_710003a878:
    lib::L2CValue::~L2CValue(this_00);
  }
  lib::L2CValue::L2CValue
            (aLStack176,_WEAPON_PACKUN_BOSSPACKUN_STATUS_WORK_FLAG_HOP_LANDING_START_TURN);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack176);
LAB_710003a974:
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack208,_WEAPON_PACKUN_BOSSPACKUN_STATUS_WORK_FLAG_HOP_LANDING_TURN);
    iVar3 = lib::L2CValue::as_integer(aLStack208);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack192);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack176);
    if ((bVar2 & 1U) == 0) goto LAB_710003a974;
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_PACKUN_BOSSPACKUN_STATUS_KIND_TURN);
    lib::L2CValue::L2CValue(aLStack176,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x50);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  lib::L2CValue::~L2CValue(aLStack128);
LAB_710003a988:
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

