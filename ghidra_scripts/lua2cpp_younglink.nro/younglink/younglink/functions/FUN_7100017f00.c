
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100017f00(L2CFighterYounglink *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_STATUS_BOW_WORK_INT_STEP);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,iVar3);
  lib::L2CValue::operator=(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LINK_STATUS_BOW_STEP_START);
  uVar6 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,CONTROL_PAD_BUTTON_SPECIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LINK_STATUS_BOW_FLAG_CHARGE);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar6 = lib::L2CValue::operator==(aLStack96,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LINK_STATUS_BOW_STEP_END);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_STATUS_BOW_WORK_INT_STEP);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
        lib::L2CValue::~L2CValue(aLStack96);
        pLVar7 = aLStack64;
        goto LAB_710001845c;
      }
    }
    else {
      bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar6 = lib::L2CValue::operator==(aLStack96,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LINK_STATUS_BOW_STEP_HOLD);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_STATUS_BOW_WORK_INT_STEP);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack64);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,3);
        uVar5 = lib::L2CValue::as_integer(pLVar7);
        uVar5 = app::sv_battle_object::kind(uVar5);
        lib::L2CValue::L2CValue(aLStack96,uVar5);
        lib::L2CValue::L2CValue(aLStack64,FIGHTER_KIND_KIRBY);
        uVar6 = lib::L2CValue::operator==(aLStack96,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,0x298585bf83);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,0x2ff4ab9a31);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        }
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LINK_STATUS_BOW_FLAG_CHARGE_MAX);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::~L2CValue(aLStack112);
        pLVar7 = aLStack96;
LAB_710001845c:
        lib::L2CValue::~L2CValue(pLVar7);
      }
    }
    lib::L2CValue::L2CValue(aLStack96,FUN_7100018640);
    lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xa0);
    pLVar7 = aLStack96;
    goto LAB_7100018484;
  }
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LINK_STATUS_BOW_STEP_HOLD);
  uVar6 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LINK_STATUS_BOW_STEP_END);
    uVar6 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,L2CFighterYounglink::status::SpecialN_main_loop);
      lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xc0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,L2CFighterYounglink::status::SpecialN_main_loop);
      lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xc0);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_STATUS_BOW_WORK_INT_MAX_HOLD_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack128,0xec7acfd87);
    uVar6 = lib::L2CValue::as_integer(aLStack112);
    uVar8 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack128,CONTROL_PAD_BUTTON_SPECIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::ControlModule__check_button_off_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    if ((bVar2 & 1U) == 0) {
      uVar6 = lib::L2CValue::operator<=(aLStack96,aLStack64);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar6 & 1) != 0) goto LAB_710001835c;
    }
    else {
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
LAB_710001835c:
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LINK_STATUS_BOW_STEP_END);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LINK_STATUS_BOW_WORK_INT_STEP);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    lib::L2CValue::L2CValue(aLStack112,FUN_7100018640);
    lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x90);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  pLVar7 = aLStack64;
LAB_7100018484:
  lib::L2CValue::~L2CValue(pLVar7);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

