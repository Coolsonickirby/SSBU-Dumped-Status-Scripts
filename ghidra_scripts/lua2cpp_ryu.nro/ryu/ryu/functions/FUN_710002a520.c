
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710002a520(L2CFighterRyu *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  float fVar9;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_special_command(this);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_SPECIAL_COMMAND_USER_STATUS_WORK_ID_PASS_FLAG_COMMAND_EXTEND);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar6 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack112,0x194c302ca2);
      uVar6 = lib::L2CValue::as_integer(aLStack96);
      uVar7 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      lib::L2CValue::L2CValue
                (aLStack128,_FIGHTER_SPECIAL_COMMAND_USER_STATUS_WORK_ID_PASS_INT_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_SPECIAL_COMMAND_USER_STATUS_WORK_ID_PASS_FLAG_COMMAND_EXTEND);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      goto LAB_710002a6d0;
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SPECIAL_COMMAND_USER_STATUS_WORK_ID_PASS_INT_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar6 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) goto LAB_710002a6d8;
    lib::L2CValue::L2CValue(aLStack160,true);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,2);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_DOLLY);
    uVar6 = lib::L2CValue::operator==(pLVar8,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,2);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_DEMON);
      uVar6 = lib::L2CValue::operator==(pLVar8,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) goto LAB_710002a7e8;
    }
    else {
LAB_710002a7e8:
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_SPECIAL_COMMAND_USER_STATUS_WORK_ID_PASS_FLAG_COMMAND_EXTEND2);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar6 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) {
        uVar5 = app::lua_bind::FighterControlModuleImpl__special_command_236236_step_impl
                          (this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack96,uVar5 & 0xff);
        lib::L2CValue::L2CValue(aLStack80,3);
        uVar6 = lib::L2CValue::operator<=(aLStack80,aLStack96);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) {
          uVar5 = app::lua_bind::FighterControlModuleImpl__special_command_214214_step_impl
                            (this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack112,uVar5 & 0xff);
          lib::L2CValue::L2CValue(aLStack80,3);
          uVar6 = lib::L2CValue::operator<=(aLStack80,aLStack112);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar6 & 1) != 0) {
LAB_710002a90c:
            lib::L2CValue::~L2CValue(aLStack112);
            goto LAB_710002a914;
          }
          uVar5 = app::lua_bind::FighterControlModuleImpl__special_command_21416_step_impl
                            (this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack128,uVar5 & 0xff);
          lib::L2CValue::L2CValue(aLStack80,3);
          uVar6 = lib::L2CValue::operator<=(aLStack80,aLStack128);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::~L2CValue(aLStack128);
            goto LAB_710002a90c;
          }
          uVar5 = app::lua_bind::FighterControlModuleImpl__special_command_23634_step_impl
                            (this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack144,uVar5 & 0xff);
          lib::L2CValue::L2CValue(aLStack80,3);
          uVar6 = lib::L2CValue::operator<=(aLStack80,aLStack144);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((uVar6 & 1) != 0) goto LAB_710002a91c;
          lib::L2CValue::L2CValue(aLStack176,false);
        }
        else {
LAB_710002a914:
          lib::L2CValue::~L2CValue(aLStack96);
LAB_710002a91c:
          lib::L2CValue::L2CValue(aLStack176,true);
        }
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar6 = lib::L2CValue::operator==(aLStack176,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack176);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,0xdf05c072b);
          lib::L2CValue::L2CValue(aLStack112,0x200e2ae0e5);
          uVar6 = lib::L2CValue::as_integer(aLStack96);
          uVar7 = lib::L2CValue::as_integer(aLStack112);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
          lib::L2CValue::L2CValue(aLStack80,iVar3);
          lib::L2CValue::L2CValue
                    (aLStack128,_FIGHTER_SPECIAL_COMMAND_USER_STATUS_WORK_ID_PASS_INT_FRAME);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          iVar4 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack80,false);
          lib::L2CValue::operator=(aLStack160,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
        }
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_SPECIAL_COMMAND_USER_STATUS_WORK_ID_PASS_FLAG_COMMAND_EXTEND2)
        ;
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::~L2CValue(aLStack80);
      }
    }
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar6 = lib::L2CValue::operator==(aLStack160,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,0.0);
      fVar9 = (float)lib::L2CValue::as_number(aLStack80);
      app::lua_bind::GroundModule__set_offset_y_impl(this->moduleAccessor,fVar9);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_SPECIAL_COMMAND_USER_STATUS_WORK_ID_PASS_FLAG_COMMAND_EXTEND);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
      lua2cpp::L2CFighterCommon::end_pass_ground(this);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue
                (aLStack128,_FIGHTER_SPECIAL_COMMAND_USER_STATUS_WORK_ID_PASS_FLOAT_SPEED_Y);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,fVar9);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue((L2CValue *)return_value,false);
      lib::L2CValue::~L2CValue(aLStack160);
      return;
    }
    pLVar8 = aLStack160;
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_SPECIAL_COMMAND_USER_STATUS_WORK_ID_PASS_FLAG_COMMAND_EXTEND);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
LAB_710002a6d0:
    pLVar8 = aLStack80;
  }
  lib::L2CValue::~L2CValue(pLVar8);
LAB_710002a6d8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,true);
  return;
}

