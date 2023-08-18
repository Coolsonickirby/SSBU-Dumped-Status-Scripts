
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SnakeSpecialNThrow_main(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ArticleOperationTarget AVar4;
  L2CValue *this_00;
  Fighter *pFVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SNAKE_GENERATE_ARTICLE_GRENADE);
  lib::L2CValue::L2CValue(aLStack128,_ARTICLE_OPE_TARGET_LAST);
  pFVar5 = (Fighter *)lib::L2CValue::as_pointer(this_00);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  AVar4 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::FighterSpecializer_Snake::is_constraint_article(pFVar5,iVar3,AVar4);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack96);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SNAKE_STATUS_SPECIAL_N_THROW_WORK_FLOAT_THROW_RATE);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,fVar9);
    lib::L2CValue::L2CValue(aLStack128,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack144,0x129fad2ee0);
    uVar7 = lib::L2CValue::as_integer(aLStack128);
    uVar8 = lib::L2CValue::as_integer(aLStack144);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar7,uVar8)
    ;
    lib::L2CValue::L2CValue(aLStack112,fVar9);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SNAKE_STATUS_SPECIAL_N_THROW_WORK_FLOAT_THROW_RATE)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,fVar9);
      lib::L2CValue::L2CValue(aLStack128,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack144,0x12602bfa52);
      uVar7 = lib::L2CValue::as_integer(aLStack128);
      uVar8 = lib::L2CValue::as_integer(aLStack144);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar7,uVar8);
      lib::L2CValue::L2CValue(aLStack112,fVar9);
      uVar7 = lib::L2CValue::operator__(aLStack80,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0x11d30c1b20);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SNAKE_STATUS_WORK_INT_MOT_KIND);
        lVar6 = lib::L2CValue::as_integer(aLStack80);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar3);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x15a551ef3f);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SNAKE_STATUS_WORK_INT_MOT_AIR_KIND);
        lVar6 = lib::L2CValue::as_integer(aLStack80);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0x123ec51680);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SNAKE_STATUS_WORK_INT_MOT_KIND);
        lVar6 = lib::L2CValue::as_integer(aLStack80);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar3);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x16b3bb4681);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SNAKE_STATUS_WORK_INT_MOT_AIR_KIND);
        lVar6 = lib::L2CValue::as_integer(aLStack80);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar3);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0x12a0a6eee7);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SNAKE_STATUS_WORK_INT_MOT_KIND);
      lVar6 = lib::L2CValue::as_integer(aLStack80);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x162dd8bee6);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SNAKE_STATUS_WORK_INT_MOT_AIR_KIND);
      lVar6 = lib::L2CValue::as_integer(aLStack80);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar3);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0x1409a3c31b);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SNAKE_STATUS_WORK_INT_MOT_KIND);
    lVar6 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x187bd32ed0);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SNAKE_STATUS_WORK_INT_MOT_AIR_KIND);
    lVar6 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar3);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SNAKE_STATUS_SPECIAL_N_THROW_WORK_FLAG_FIRST);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,true);
  FUN_7100172c40(this,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,SnakeSpecialNThrow_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

