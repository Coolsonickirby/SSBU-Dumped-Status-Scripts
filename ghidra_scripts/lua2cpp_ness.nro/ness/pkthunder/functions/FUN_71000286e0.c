
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000286e0(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
LAB_7100028880:
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,8);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar6 = lib::L2CValue::operator==(pLVar7,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_NESS_PK_THUNDER_INSTANCE_WORK_ID_INT_CHILD_NUM);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_NESS_PK_THUNDER_CHILD_MAX);
      uVar6 = lib::L2CValue::operator<(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack64,_WEAPON_NESS_PK_THUNDER_INSTANCE_WORK_ID_INT_CHILD_REG_TIMER);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack96,iVar3);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,2);
        lib::L2CValue::operator%(aLStack96,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,0);
        uVar6 = lib::L2CValue::operator==(aLStack112,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack64,_WEAPON_NESS_PK_THUNDER_INSTANCE_WORK_ID_FLAG_CREATE_CHILD);
          iVar3 = lib::L2CValue::as_integer(aLStack64);
          app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar3);
          lib::L2CValue::~L2CValue(aLStack64);
        }
        lib::L2CValue::L2CValue(aLStack64,1);
        lib::L2CValue::operator+(aLStack96,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue
                  (aLStack64,_WEAPON_NESS_PK_THUNDER_INSTANCE_WORK_ID_INT_CHILD_REG_TIMER);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        iVar5 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar3,iVar5);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack96);
      }
      lib::L2CValue::~L2CValue(aLStack80);
    }
    iVar3 = 0;
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__dec_int_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar6 = lib::L2CValue::operator<=(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_GROUND_TOUCH_FLAG_ALL);
      uVar4 = lib::L2CValue::as_integer(aLStack80);
      bVar2 = app::lua_bind::GroundModule__is_touch_impl(param_2->moduleAccessor,uVar4);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((bVar1 & 1U) == 0) goto LAB_7100028880;
      lib::L2CValue::L2CValue(aLStack144,_WEAPON_NESS_PK_THUNDER_STATUS_KIND_VANISH);
      lib::L2CValue::L2CValue(aLStack160,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x70,(L2CValue)0x60);
      lib::L2CValue::~L2CValue(aLStack160);
      pLVar7 = aLStack144;
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,0x27936db96d);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack64);
      app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
      lib::L2CValue::~L2CValue(aLStack128);
      pLVar7 = aLStack64;
    }
    lib::L2CValue::~L2CValue(pLVar7);
    iVar3 = 1;
  }
  lib::L2CValue::L2CValue(param_1,iVar3);
  return;
}

