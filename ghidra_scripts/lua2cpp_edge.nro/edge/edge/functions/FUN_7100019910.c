
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100019910(L2CFighterEdge *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
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
  
  lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
  lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting(this,(L2CValue)0xa0);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,false);
  FUN_7100013d60(this,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack144,0x105c3c1e76);
  lib::L2CValue::L2CValue(aLStack160,0x14dd899136);
  lib::L2CValue::L2CValue(aLStack176,true);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  FUN_71000188f0(this);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EDGE_STATUS_SPECIAL_HI_FLOAT_DECIDE_DIR_X);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack192,fVar6);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_EDGE_STATUS_SPECIAL_HI_FLOAT_DECIDE_DIR_Y);
  iVar3 = lib::L2CValue::as_integer(aLStack224);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack208,fVar6);
  FUN_7100018b30(this,aLStack192,aLStack208);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EDGE_STATUS_SPECIAL_HI_FLAG_CHARGED_RUSH);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack256,0x10bc18dc3b);
  lib::L2CValue::L2CValue(aLStack272,aLStack224);
  FUN_7100002e50(aLStack240,this,aLStack256,aLStack272);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack304,0xdab90efe6);
  lib::L2CValue::L2CValue(aLStack320,aLStack224);
  FUN_7100002e50(aLStack288,this,aLStack304,aLStack320);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::operator-(aLStack288,aLStack240);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0xe);
  lib::L2CValue::operator-(pLVar4,aLStack240);
  lib::L2CValue::operator/(aLStack80,aLStack336);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack368,aLStack352);
  lib::L2CValue::L2CValue(aLStack384,0.0);
  lib::L2CValue::L2CValue(aLStack400,1.0);
  lua2cpp::L2CFighterBase::clamp(this,(L2CValue)0x90,(L2CValue)0x80,(L2CValue)0x70);
  lib::L2CValue::operator=(aLStack352,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::L2CValue(aLStack432,_FIGHTER_EDGE_STATUS_SPECIAL_HI_FLOAT_DECIDE_ROT_DEGREE);
  iVar3 = lib::L2CValue::as_integer(aLStack432);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,fVar6);
  lib::L2CValue::operator*(aLStack80,aLStack352);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator+(aLStack416,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EDGE_STATUS_SPECIAL_HI_FLOAT_RUSH_DEGREE);
  fVar6 = (float)lib::L2CValue::as_number(aLStack432);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar6,iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::L2CValue(aLStack432,_MA_MSC_CMD_SLOPE_SLOPE);
  lib::L2CValue::L2CValue(aLStack448,MA_MSC_CMD_SLOEP_SLOPE_KIND_NONE);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack432);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack448);
  app::sv_module_access::slope(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack448);
  lib::L2CValue::~L2CValue(aLStack432);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack224);
  if ((bVar2 & 1U) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0xe);
    uVar5 = lib::L2CValue::operator<=(aLStack288,pLVar4);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack432,_FIGHTER_EDGE_STATUS_KIND_SPECIAL_HI_RUSH);
      lib::L2CValue::L2CValue(aLStack448,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x40);
      lib::L2CValue::~L2CValue(aLStack448);
      lib::L2CValue::~L2CValue(aLStack432);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100019e00;
    }
  }
  else {
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack432,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack432);
    lib::L2CValue::~L2CValue(aLStack432);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack432,_FIGHTER_EDGE_STATUS_KIND_SPECIAL_HI_CHARGED_RUSH);
      lib::L2CValue::L2CValue(aLStack448,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x40);
      lib::L2CValue::~L2CValue(aLStack448);
      lib::L2CValue::~L2CValue(aLStack432);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100019e00;
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100019e00:
  lib::L2CValue::~L2CValue(aLStack416);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  return;
}

