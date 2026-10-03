
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000123f0(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  float fVar7;
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
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_PLIZARDON_BREATH_INSTANCE_WORK_ID_INT_HIT_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar5 = lib::L2CValue::operator<=(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      app::lua_bind::AttackModule__clear_all_impl(param_2->moduleAccessor);
    }
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar5 = lib::L2CValue::operator<=(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_GROUND_TOUCH_FLAG_ALL);
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      bVar2 = app::lua_bind::GroundModule__is_touch_impl(param_2->moduleAccessor,uVar4);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,0x18b78d41a0);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,aLStack80);
        app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
        lib::L2CAgent::pop_lua_stack(param_2,1);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack80);
      }
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_PLIZARDON_BREATH_INSTANCE_WORK_ID_FLOAT_SPEED_MUL);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,fVar7);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_PLIZARDON_BREATH_INSTANCE_WORK_ID_FLOAT_SCALE);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,fVar7);
      lib::L2CValue::~L2CValue(aLStack80);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,0xe);
      lib::L2CValue::operator*(pLVar6,aLStack96);
      lib::L2CValue::L2CValue(aLStack192,0.2);
      lib::L2CValue::operator-(aLStack112,aLStack192);
      lib::L2CValue::operator*(aLStack256,aLStack176);
      lib::L2CValue::L2CValue(aLStack80,0.1);
      lib::L2CValue::operator*(aLStack240,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::operator+(aLStack192,aLStack224);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack256);
      uVar5 = lib::L2CValue::operator<(aLStack112,aLStack208);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::operator=(aLStack208,aLStack112);
      }
      lib::L2CValue::L2CValue(aLStack80,1e-05);
      uVar5 = lib::L2CValue::operator<=(aLStack208,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,1e-05);
        lib::L2CValue::operator=(aLStack208,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
      }
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::operator+(aLStack208,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      fVar7 = (float)lib::L2CValue::as_number(aLStack224);
      app::lua_bind::PostureModule__set_scale_impl(param_2->moduleAccessor,fVar7,false);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack112);
      pLVar6 = aLStack96;
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_PLIZARDON_BREATH_STATUS_KIND_VANISH);
      lib::L2CValue::L2CValue(aLStack144,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x80,(L2CValue)0x70);
      lib::L2CValue::~L2CValue(aLStack144);
      pLVar6 = aLStack128;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_PLIZARDON_BREATH_INSTANCE_WORK_ID_INT_HIT_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__dec_int_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__dec_int_impl(param_2->moduleAccessor,iVar3);
    pLVar6 = aLStack80;
  }
  lib::L2CValue::~L2CValue(pLVar6);
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

