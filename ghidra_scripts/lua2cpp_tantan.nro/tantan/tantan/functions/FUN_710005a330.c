
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710005a330(L2CValue *param_1,L2CFighterCommon *param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  Hash40 HVar5;
  L2CValue *this;
  bool bVar6;
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_CONTROL_PAD_BUTTON_JUMP);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(param_2->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
LAB_710005a440:
    bVar6 = false;
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack128,iVar2);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar3 = lib::L2CValue::operator==(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar3 & 1) == 0) goto LAB_710005a440;
    bVar6 = true;
  }
  lib::L2CValue::L2CValue(aLStack160,bVar6);
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar3 = lib::L2CValue::operator==(aLStack160,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack160);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MINI_JUMP_ATTACK_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack96,iVar2);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar3 = lib::L2CValue::operator<(aLStack80,aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar3 & 1) == 0) {
      lua2cpp::L2CFighterCommon::sub_check_button_jump(param_2);
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar3 & 1) == 0) goto LAB_710005a858;
      lib::L2CValue::L2CValue(aLStack240,false);
      lib::L2CValue::L2CValue(aLStack256,true);
      FUN_710004c370(aLStack96,param_2,aLStack240,aLStack256);
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack240);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_JUMP_MINI);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar2);
        lib::L2CValue::~L2CValue(aLStack80);
      }
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_CLEAR_COMMAND_MOVE);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar2);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack272,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_JUMP_SQUAT);
      lib::L2CValue::L2CValue(aLStack288,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xf0,(L2CValue)0xe0);
      lib::L2CValue::~L2CValue(aLStack288);
      this = aLStack272;
    }
    else {
      bVar1 = app::lua_bind::StopModule__is_stop_impl(param_2->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::~L2CValue(aLStack96);
      }
      else {
        lua2cpp::L2CFighterCommon::sub_check_button_jump(param_2);
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar3 = lib::L2CValue::operator==(aLStack112,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar3 & 1) != 0) {
          FUN_710004ecc0(aLStack96,param_2);
          lib::L2CValue::L2CValue(aLStack80,false);
          uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((uVar3 & 1) != 0) {
            lib::L2CValue::L2CValue
                      (aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_L);
            iVar2 = lib::L2CValue::as_integer(aLStack80);
            lVar4 = app::lua_bind::WorkModule__get_int64_impl(param_2->moduleAccessor,iVar2);
            lib::L2CValue::L2CValue(aLStack96,lVar4);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::L2CValue(aLStack80,0x7fb997a80);
            uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            if ((uVar3 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_L);
              iVar2 = lib::L2CValue::as_integer(aLStack112);
              HVar5 = app::lua_bind::MotionModule__motion_kind_partial_impl
                                (param_2->moduleAccessor,iVar2);
              lib::L2CValue::L2CValue(aLStack80,HVar5);
              uVar3 = lib::L2CValue::operator==(aLStack80,aLStack96);
              lib::L2CValue::~L2CValue(aLStack80);
              lib::L2CValue::~L2CValue(aLStack112);
              if ((uVar3 & 1) == 0) goto LAB_710005a908;
              lib::L2CValue::L2CValue
                        (aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_JUMP_MINI);
              iVar2 = lib::L2CValue::as_integer(aLStack80);
              app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar2);
            }
            else {
LAB_710005a908:
              lib::L2CValue::L2CValue
                        (aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_JUMP_MINI_SPECIAL);
              iVar2 = lib::L2CValue::as_integer(aLStack80);
              app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar2);
            }
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::~L2CValue(aLStack96);
          }
          lib::L2CValue::L2CValue
                    (aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_CLEAR_COMMAND_MOVE);
          iVar2 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar2);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack208,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_JUMP_SQUAT);
          lib::L2CValue::L2CValue(aLStack224,false);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x30,(L2CValue)0x20);
          lib::L2CValue::~L2CValue(aLStack224);
          this = aLStack208;
          goto LAB_710005a9a0;
        }
      }
LAB_710005a858:
      lua2cpp::L2CFighterCommon::sub_check_button_frick(param_2);
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar3 & 1) == 0) {
        bVar6 = false;
        goto LAB_710005a9ac;
      }
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_CLEAR_COMMAND_MOVE);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar2);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack304,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_JUMP_SQUAT);
      lib::L2CValue::L2CValue(aLStack320,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xd0,(L2CValue)0xc0);
      lib::L2CValue::~L2CValue(aLStack320);
      this = aLStack304;
    }
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_JUMP_MINI_SPECIAL);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar2);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_CLEAR_COMMAND_MOVE);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar2);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
    lib::L2CValue::L2CValue(aLStack192,false);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x50,(L2CValue)0x40);
    lib::L2CValue::~L2CValue(aLStack192);
    this = aLStack176;
  }
LAB_710005a9a0:
  lib::L2CValue::~L2CValue(this);
  bVar6 = true;
LAB_710005a9ac:
  lib::L2CValue::L2CValue(param_1,bVar6);
  return;
}

