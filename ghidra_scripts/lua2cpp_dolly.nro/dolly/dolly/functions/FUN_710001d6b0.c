
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001d6b0(undefined8 param_1,L2CFighterCommon *param_2)

{
  L2CValue *this;
  byte bVar1;
  int iVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  BattleObjectModuleAccessor *pBVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
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
  
  this = &param_2->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DOLLY_STATUS_KIND_SPECIAL_B);
  uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    fVar9 = (float)app::lua_bind::PostureModule__lr_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,fVar9);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,5);
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
    fVar9 = (float)lib::L2CValue::as_number(aLStack96);
    bVar1 = app::FighterSpecializer_Dolly::check_special_air_b(pBVar6,fVar9);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator==(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::~L2CValue(aLStack112);
      }
      else {
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_DOLLY_INSTANCE_WORK_ID_INT_AIR_STICK_BACK_FRAME)
        ;
        iVar2 = lib::L2CValue::as_integer(aLStack144);
        iVar2 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar2);
        lib::L2CValue::L2CValue(aLStack128,iVar2);
        lib::L2CValue::L2CValue(aLStack176,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack192,0x1cc7e79150);
        uVar5 = lib::L2CValue::as_integer(aLStack176);
        uVar8 = lib::L2CValue::as_integer(aLStack192);
        iVar2 = app::lua_bind::WorkModule__get_param_int_impl(param_2->moduleAccessor,uVar5,uVar8);
        lib::L2CValue::L2CValue(aLStack160,iVar2);
        uVar5 = lib::L2CValue::operator<=(aLStack160,aLStack128);
        if ((uVar5 & 1) == 0) {
          uVar5 = 0;
        }
        else {
          pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,5);
          lib::L2CValue::operator-(aLStack96);
          pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
          fVar9 = (float)lib::L2CValue::as_number(aLStack224);
          bVar1 = app::FighterSpecializer_Dolly::check_special_air_b(pBVar6,fVar9);
          lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack80,true);
          uVar5 = lib::L2CValue::operator==(aLStack208,aLStack80);
          uVar5 = uVar5 & 0xffffffff;
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack208);
          lib::L2CValue::~L2CValue(aLStack224);
        }
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar5 & 1) != 0) goto LAB_710001d788;
      }
    }
    else {
      lib::L2CValue::~L2CValue(aLStack112);
LAB_710001d788:
      app::lua_bind::PostureModule__reverse_lr_impl(param_2->moduleAccessor);
      app::lua_bind::PostureModule__update_rot_y_lr_impl(param_2->moduleAccessor);
    }
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DOLLY_STRENGTH_S);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DOLLY_STATUS_SPECIAL_COMMON_WORK_INT_STRENGTH);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DOLLY_STATUS_KIND_SPECIAL_B);
  uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DOLLY_STATUS_KIND_SPECIAL_B_COMMAND);
    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,1);
      lib::L2CValue::operator=(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0xf0985e284);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DOLLY_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND);
      lVar7 = lib::L2CValue::as_integer(aLStack80);
      iVar2 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int64_impl(param_2->moduleAccessor,lVar7,iVar2);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x13021c6f50);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DOLLY_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND_AIR);
      lVar7 = lib::L2CValue::as_integer(aLStack80);
      iVar2 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int64_impl(param_2->moduleAccessor,lVar7,iVar2);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_DOLLY_STATUS_SPECIAL_COMMON_WORK_FLAG_COMMAND);
      iVar2 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar5 = lib::L2CValue::operator==(aLStack128,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_01);
        lib::L2CValue::operator=(aLStack112,aLStack80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_02);
        lib::L2CValue::operator=(aLStack112,aLStack80);
      }
      goto LAB_710001dcf8;
    }
  }
  lib::L2CValue::L2CValue(aLStack80,3);
  lib::L2CValue::operator=(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xffdcac697);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DOLLY_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND);
  lVar7 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int64_impl(param_2->moduleAccessor,lVar7,iVar2);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x13f6534b43);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DOLLY_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND_AIR);
  lVar7 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int64_impl(param_2->moduleAccessor,lVar7,iVar2);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_DOLLY_STATUS_SPECIAL_COMMON_WORK_FLAG_COMMAND);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator==(aLStack128,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_03);
    lib::L2CValue::operator=(aLStack112,aLStack80);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_04);
    lib::L2CValue::operator=(aLStack112,aLStack80);
  }
LAB_710001dcf8:
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack128,0x20cbc92683);
  lib::L2CValue::L2CValue(aLStack144,1);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_LOG_DATA_INT_ATTACK_NUM_KIND);
  lib::L2CValue::L2CValue(aLStack80,1);
  lib::L2CValue::operator-(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)param_2);
  lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack128);
  lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack144);
  lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack160);
  lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack176);
  app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)param_2,1);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack80,1);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_customize_no_impl(param_2->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack256,0xfea97fe73);
  lua2cpp::L2CFighterCommon::sub_set_special_start_common_kinetic_setting(param_2,(L2CValue)0x0);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack272,true);
  lib::L2CValue::L2CValue(aLStack288,false);
  lib::L2CValue::L2CValue(aLStack304,true);
  lib::L2CValue::L2CValue(aLStack320,0);
  lib::L2CValue::L2CValue(aLStack336,0);
  lib::L2CValue::L2CValue(aLStack352,false);
  FUN_710001b620(param_2,aLStack272,aLStack288,aLStack304,aLStack320,aLStack336,aLStack352);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_DOLLY_STATUS_SPECIAL_COMMON_WORK_FLAG_COMMAND);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator==(aLStack128,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack144,0x11af990ec3);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    uVar8 = lib::L2CValue::as_integer(aLStack144);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_2->moduleAccessor,uVar5,uVar8);
    lib::L2CValue::L2CValue(aLStack80,fVar9);
    fVar9 = (float)lib::L2CValue::as_number(aLStack80);
    app::lua_bind::AttackModule__set_power_mul_status_impl(param_2->moduleAccessor,fVar9);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(aLStack368,FUN_710001e2c0);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(param_2,(L2CValue)0x90);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

