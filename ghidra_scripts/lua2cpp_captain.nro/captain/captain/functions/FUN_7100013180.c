
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100013180(L2CFighterCaptain *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  L2CAgent *this_00;
  L2CValue *in_x1;
  L2CValue *pLVar6;
  float fVar7;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack160,in_x1);
  lib::L2CValue::L2CValue(aLStack80,0);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack160);
  if ((bVar1 & 1U) != 0) goto LAB_710001360c;
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_SUPER_JUMP_PUNCH_FLAG_CHANGE_KINE);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar5 = lib::L2CValue::operator==(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::~L2CValue(aLStack96);
    pLVar6 = aLStack112;
LAB_7100013334:
    lib::L2CValue::~L2CValue(pLVar6);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_SUPER_JUMP_PUNCH_FLAG_MOVE_TRANS);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar5 = lib::L2CValue::operator==(aLStack128,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_SUPER_JUMP_PUNCH_FLAG_CHANGE_KINE);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_TYPE_CAPTAIN_SPECIAL_HI);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xa0);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_AIR);
      GVar4 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
      pLVar6 = aLStack64;
      goto LAB_7100013334;
    }
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_SUPER_JUMP_PUNCH_FLAG_REVERSE_LR);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar5 = lib::L2CValue::operator==(aLStack112,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_SUPER_JUMP_PUNCH_FLAG_REVERSE_LR);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
    pLVar6 = (L2CValue *)0x1a;
    this_00 = (L2CAgent *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x1a);
    lib::L2CAgent::math_abs(this_00,pLVar6);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_SUPER_JUMP_PUNCH_WORK_FLOAT_CONST_LR_STICK_X)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,fVar7);
    uVar5 = lib::L2CValue::operator<(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar5 & 1) != 0) {
      bVar2 = app::lua_bind::PostureModule__set_stick_lr_impl(this->moduleAccessor,0.0);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
      lib::L2CValue::~L2CValue(aLStack112);
      app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_TYPE_CAPTAIN_SPECIAL_HI);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
    }
  }
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_CAPTAIN_STATUS_SPECIAL_HI_FLAG_IS_CHECK_DIVE);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar5 = lib::L2CValue::operator==(aLStack128,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((uVar5 & 1) != 0) {
    lua2cpp::L2CFighterCommon::sub_air_check_dive(this);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_WORK_ID_FLAG_RESERVE_DIVE);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_ENERGY_ID_MOTION);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      fVar7 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
      lib::L2CValue::L2CValue(aLStack64,fVar7);
      lib::L2CValue::operator=(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack64,FIGHTER_KINETIC_ENERGY_ID_MOTION);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
    }
  }
LAB_710001360c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack160);
  return;
}

