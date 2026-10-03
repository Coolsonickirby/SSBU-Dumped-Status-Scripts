
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710001ac90(L2CFighterJack *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((bVar1 & 1U) == 0) {
    bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar5 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_JACK_STATUS_SPECIAL_HI2_FLAG_APPEAR_DOYLE);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack64,true);
      uVar5 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) goto LAB_710001ae70;
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_JACK_GENERATE_ARTICLE_DOYLE);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_JACK_DOYLE_STATUS_KIND_SPECIAL_HI_END);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::ArticleModule__change_status_impl(this->moduleAccessor,iVar3,iVar4,0);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_JACK_STATUS_SPECIAL_HI2_FLAG_DOYLE_NORMAL);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_JACK_STATUS_SPECIAL_HI2_FLAG_APPEAR_DOYLE);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_JACK_STATUS_KIND_SPECIAL_HI2_END);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
      lib::L2CValue::~L2CValue(aLStack80);
    }
    lib::L2CValue::~L2CValue(aLStack64);
  }
LAB_710001ae70:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

