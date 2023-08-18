
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMaster::status::ReboundStop_pre(L2CFighterMaster *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_SPECIAL_N);
  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_N_TURN);
    uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) goto LAB_710003a9ec;
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_N_HOLD);
    uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) goto LAB_710003a9ec;
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_N_SHOOT);
    uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) goto LAB_710003a9ec;
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_N_MAX_SHOOT);
    uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) goto LAB_710003a9ec;
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_N_CANCEL);
    uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) goto LAB_710003a9ec;
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_N_JUMP_CANCEL);
    uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) goto LAB_710003a9ec;
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_SPECIAL_S);
    uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_S_FRONT);
      uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar3 & 1) != 0) goto LAB_710003aaf0;
      pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_S_FRONT_DASH);
      uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar3 & 1) != 0) goto LAB_710003aaf0;
      pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SPECIAL_HI);
      uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) {
        pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_HI_HIT);
        uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar3 & 1) != 0) goto LAB_710003ac48;
        pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_HI_OVERTAKE);
        uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar3 & 1) != 0) goto LAB_710003ac48;
        pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_HI_WALL_JUMP);
        uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar3 & 1) != 0) goto LAB_710003ac48;
        pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_HI_FAIL);
        uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar3 & 1) != 0) goto LAB_710003ac48;
        pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SPECIAL_LW);
        uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar3 & 1) == 0) {
          pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_LW_TURN);
          uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar3 & 1) == 0) {
            pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_LW_HIT);
            uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar3 & 1) == 0) {
              pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_LW_CANCEL);
              uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              if ((uVar3 & 1) == 0) goto LAB_710003aa20;
            }
          }
        }
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_GENERATE_ARTICLE_AXE);
        iVar1 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::ArticleModule__generate_article_enable_impl
                  (this->moduleAccessor,iVar1,false,-1);
      }
      else {
LAB_710003ac48:
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
        iVar1 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::ArticleModule__generate_article_enable_impl
                  (this->moduleAccessor,iVar1,false,-1);
      }
    }
    else {
LAB_710003aaf0:
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_GENERATE_ARTICLE_SPEAR);
      iVar1 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::ArticleModule__generate_article_enable_impl
                (this->moduleAccessor,iVar1,false,-1);
    }
  }
  else {
LAB_710003a9ec:
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_GENERATE_ARTICLE_BOW);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::ArticleModule__generate_article_enable_impl(this->moduleAccessor,iVar1,false,-1);
  }
  lib::L2CValue::_L2CValue(aLStack80);
LAB_710003aa20:
  lua2cpp::L2CFighterCommon::status_pre_ReboundStop(this);
  return;
}

