
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100021090(L2CValue *param_1,L2CAgent *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *this;
  float fVar6;
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
  
  lib::L2CValue::L2CValue(aLStack96,_CONTROL_PAD_BUTTON_ATTACK);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_MURABITO_INSTANCE_WORK_ID_FLOAT_SPECIAL_HI_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,fVar6);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar4 = lib::L2CValue::operator<=(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_HI_BALLOON_NUM);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar4 = lib::L2CValue::operator<=(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((uVar4 & 1) == 0) {
        iVar3 = 0;
        goto LAB_71000213f8;
      }
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CValue::L2CValue(aLStack192,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      fVar6 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl
                               (param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack144,fVar6);
      lib::L2CValue::L2CValue(aLStack224,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack240,0x1156a73374);
      uVar4 = lib::L2CValue::as_integer(aLStack224);
      uVar5 = lib::L2CValue::as_integer(aLStack240);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_2->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack208,fVar6);
      lib::L2CValue::operator*(aLStack144,aLStack208);
      lib::L2CValue::L2CValue(aLStack272,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack288,0xd97e7aaed);
      uVar4 = lib::L2CValue::as_integer(aLStack272);
      uVar5 = lib::L2CValue::as_integer(aLStack288);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_2->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack256,fVar6);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack80);
      lib::L2CAgent::push_lua_stack(param_2,aLStack96);
      lib::L2CAgent::push_lua_stack(param_2,aLStack256);
      app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack304,FIGHTER_STATUS_KIND_FALL_SPECIAL);
      lib::L2CValue::L2CValue(aLStack320,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xd0,(L2CValue)0xc0);
      lib::L2CValue::~L2CValue(aLStack320);
      this = aLStack304;
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_HI_END);
      lib::L2CValue::L2CValue(aLStack176,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x60,(L2CValue)0x50);
      lib::L2CValue::~L2CValue(aLStack176);
      this = aLStack160;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_HI_DETACH);
    lib::L2CValue::L2CValue(aLStack128,true);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x90,(L2CValue)0x80);
    lib::L2CValue::~L2CValue(aLStack128);
    this = aLStack112;
  }
  lib::L2CValue::~L2CValue(this);
  iVar3 = 1;
LAB_71000213f8:
  lib::L2CValue::L2CValue(param_1,iVar3);
  return;
}

