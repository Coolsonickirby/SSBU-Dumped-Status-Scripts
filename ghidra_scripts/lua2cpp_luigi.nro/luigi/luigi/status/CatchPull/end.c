
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterLuigi::status::CatchPull_end(L2CFighterLuigi *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  long lVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::status_end_CatchPull(this);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,true);
  this_00 = &this->globalTable;
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_THROW);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_CATCH_WAIT);
    uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_CATCH_ATTACK);
      uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_CATCH_CUT);
        uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) goto LAB_710000554c;
        lib::L2CValue::L2CValue(aLStack80,false);
        lib::L2CValue::operator_(aLStack112,aLStack80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,false);
        lib::L2CValue::operator_(aLStack112,aLStack80);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,false);
      lib::L2CValue::operator_(aLStack112,aLStack80);
    }
    pLVar3 = aLStack80;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_CATCH_WAIT_WORK_INT_MOTION_KIND);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    lVar5 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack128,lVar5);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x749f709a8);
    uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0x74e9acdb1);
      uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0x8a0abc72c);
        uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,0x83ec83f4b);
          uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,0xc0f9e0724);
            uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            pLVar3 = aLStack128;
            if ((uVar4 & 1) == 0) goto LAB_7100005548;
          }
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack80,false);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar3 = aLStack128;
  }
LAB_7100005548:
  lib::L2CValue::_L2CValue(pLVar3);
LAB_710000554c:
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUIGI_GENERATE_ARTICLE_OBAKYUMU);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar2,0);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUIGI_GENERATE_ARTICLE_PLUNGER);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar2,0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

